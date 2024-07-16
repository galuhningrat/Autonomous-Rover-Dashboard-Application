#include <Servo.h>
#include <Wire.h>
#include <Adafruit_INA219.h>

// Servo
Servo myservo;

// HC-SR04 ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

// Laser
const int laserPin = 12;

// INA219
Adafruit_INA219 ina219;

long duration;
float distance;
int servoSetting;
bool servoIncreasing = true;

void setup() {
  // Serial
  Serial.begin(115200);
  Serial.println("Radar and Battery Monitor");

  // Servo
  myservo.attach(11);
  myservo.write(0); // Initialize servo at angle 0

  // HC-SR04
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Laser
  pinMode(laserPin, OUTPUT);
  digitalWrite(laserPin, LOW); // Ensure the laser is off initially

  // INA219
  if (!ina219.begin()) {
    Serial.println("Failed to find INA219 chip");
    while (1) {
      delay(10);
    }
  } else {
    Serial.println("INA219 chip found");
  }
  ina219.setCalibration_32V_2A();
}

void loop() {
  getDistance();
  readSerialCommand();
  outputDistance();

  if (distance < 50) {
    stopAndActivateLaser();
  } else {
    delay(50);
  }

  sendBatteryData();
  delay(2000);
}

// Function to read servo angle command from serial
void readSerialCommand() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    int angle = command.toInt();
    if (angle >= 0 && angle <= 180) {
      myservo.write(angle);
      servoSetting = angle;
    }
  }
}

// Function to get distance from HC-SR04
void getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
}

// Function to output distance to Serial
void outputDistance() {
  Serial.print(servoSetting); // Send servo angle
  Serial.print(",");
  Serial.println(distance);   // Send distance
}

// Function to stop servo and activate laser
void stopAndActivateLaser() {
  digitalWrite(laserPin, HIGH); // Turn on the laser
  delay(2000); // Keep the laser on for 2 seconds
  digitalWrite(laserPin, LOW); // Turn off the laser
  delay(2000); // Wait for 2 seconds before resuming
}

// Function to monitor battery parameters
void monitorBattery() {
  float shuntvoltage = 0;
  float busvoltage = 0;
  float current_mA = 0;
  float loadvoltage = 0;
  float power_mW = 0;

  shuntvoltage = ina219.getShuntVoltage_mV();
  busvoltage = ina219.getBusVoltage_V();
  current_mA = ina219.getCurrent_mA();
  power_mW = ina219.getPower_mW();
  loadvoltage = busvoltage + (shuntvoltage / 1000);

  Serial.print("Bus Voltage:   ");
  Serial.print(busvoltage);
  Serial.println(" V");
  Serial.print("Shunt Voltage: ");
  Serial.print(shuntvoltage);
  Serial.println(" mV");
  Serial.print("Load Voltage:  ");
  Serial.print(loadvoltage);
  Serial.println(" V");
  Serial.print("Current:       ");
  Serial.print(current_mA);
  Serial.println(" mA");
  Serial.print("Power:         ");
  Serial.print(power_mW);
  Serial.println(" mW");
  Serial.println("");
  

  delay(2000);
}

void sendBatteryData() {
  float shuntvoltage = ina219.getShuntVoltage_mV();
  float busvoltage = ina219.getBusVoltage_V();
  float current_mA = ina219.getCurrent_mA();
  float power_mW = ina219.getPower_mW();
  float loadvoltage = busvoltage + (shuntvoltage / 1000);

  Serial.print("B,");
  Serial.print(busvoltage);
  Serial.print(",");
  Serial.print(shuntvoltage);
  Serial.print(",");
  Serial.print(loadvoltage);
  Serial.print(",");
  Serial.print(current_mA);
  Serial.print(",");
  Serial.println(power_mW);
}
