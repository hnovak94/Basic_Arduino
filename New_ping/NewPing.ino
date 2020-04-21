#include <Servo.h>
// New Ping
// Harriet Novak
// The goal of this assignment is to teach us to use the new ping library to reduce functions. This code 
#include <NewPing.h>


int trigPin = 11; // sets trigpin to 11
int echoPin = 12; // sets echopin to 12 
int maxDist = 200; 
 
long duration; // sets up duration variable as a long variable which means it can store a lot of numbers
int cm; // centimeter variable is an integer 
 
Servo myServo;
int servoPin = 9;
 
NewPing myHCSR04(trigPin, echoPin, maxDist); // this code replaces sensor function
 
 
void setup(){
	pinMode(trigPin, OUTPUT); 
	pinMode(echoPin, INPUT); 
	Serial.begin(9600);
	myServo.attach(servoPin);
}
 
 
 
void loop() { 

	cm = myHCSR04.ping_cm();

	if (cm != 0 && cm <= 45) { // loop only runs if distance is less than or equal to 45 cm
			if(cm < 10) {
				moveServo(); // this function tells the servo to move to 180
			
		}
		else {
		stopServo(); // this function tells the servo to move to 90
		} 
	
		Serial.println(cm); // prints the distance in cms
		delay(10);
	 }
	 delay(10); }
	 

 

 void moveServo() {
 	myServo.write(180); // servo moves to 180
 }

 void stopServo() {
 	myServo.write(90); // servo moves to 90
 }
 

