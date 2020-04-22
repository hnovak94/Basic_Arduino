// Hello Functions
// Harriet Novak
// This goal of this assignment was to learn how to use functions in order to minimize code and make it more precise. This code uses an ultrasonic sensor and a continuous servo to slow down or speed up based on the distance an object is away from the sensor. 

#include <Servo.h> // includes servo library

Servo myServo; // creates object to control servo
int servoData = 0;
const int trigPin = 11; // sets trigpin to 11
const int echoPin = 12; // sets echopin to 12
int x = 0; // sets servo degrees to 0
int timeSinceObject;
int duration, cm;
void setup()
{
Serial.begin(9600);
myServo.attach(9); // sets servo pin to 9
}

void loop()
{
cm = getDistance(); // runs function getDistance which calculates the distance of an object away from the sensor

x = cm + 45; // when an object is 45 cms away the servo will stop moving
cm = microsecondsToCentimeters(timeSinceObject);
if (cm != 0)
{
if (cm <= 90) // if object is <= 90 cm 
{
myServo.write(x);
}
else
if (cm >= 90) // if object is >= 90 cms then stop servo
{
myServo.write(90); // stop servo
}
delay(100);
}
}

long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}

int getDistance()
{
pinMode(trigPin, OUTPUT);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
timeSinceObject = pulseIn(echoPin, HIGH); // converts time to distance
return cm;
}
