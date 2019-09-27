#include <Servo.h>
#include <NewPing.h>


int trigPin = 11; //This makes the pin a variable
int echoPin = 12; 
int maxDist = 200; 
 
long duration;
int cm; // says that the variable distance is an integer
 
Servo myServo;
int servoPin = 9;
 
NewPing myHCSR04(trigPin, echoPin, maxDist);
 
 
void setup(){
	pinMode(trigPin, OUTPUT); //sets the trigPin as an OUTPUT
	pinMode(echoPin, INPUT); //sets the echoPin as an INPUT
	Serial.begin(9600); //Starts the serial monitor
	myServo.attach(servoPin);
}
 
 
 
void loop(){ //This makes the servo move or not move
	cm = myHCSR04.ping_cm();
	if (cm != 0 && cm <150){ //This makes it so the code doesn't print zeros or numbers above 150
		if(cm < 10){
			moveServo(); //This function makes the servo move 180
		}
		else{
		stopServo();//This function makes the servo stop 
		}
	Serial.println(cm);
	}
	delay(10);
} 
 
 
void moveServo(){
	myServo.write(180); //The servo will move 180
}

 
 
void stopServo(){
	myServo.write(90); //The servo will stop
}
