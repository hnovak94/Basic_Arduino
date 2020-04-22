# Arduino

## Not So Basic Arduino Assigments

NewPing, HelloFunction, LCD Backpack, Hello LCD, LED Blink Revisited


## New Ping
This assignment I learned how to use new ping. I used a continous servo and an ultrasonic sensor with an Arduino. For my code, the servo would move at a continous pace until it reached a certain point (45cm), at which it would stop moving entirely. Using new ping eliminates the need for functions. 

### Problem/Advice
I didn't understand the point or use of new ping when I started the assignment and looking at former students work on the CHS Sigma Wiki was extremely helpful. 

### Wiring
![wiring diagram](http://wiki.chssigma.com/images/5/50/Ultrasonic_Sensor_with_Servo.PNG)
Credit: Imogen A. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Imogen%27s_Engineering_2_Notebook#Wiring_.26_Pictures)

## Hello Function
This assignment I learned how to use a function. I used a continous servo and an ultrasonic sensor with an Arduino. Depending upon the distance away from an object (determined by the ultrasonic sensor), the servo would move a certain speed. The functions I used were called getDistance and microsecondsIntoCentimeters. getDistance figured out how far away an object was from the ultrasonic sensor. microsecondsIntoCentimeters converted the time it took for a wave to return to the ultrasonic sensor (in microseconds) to distance (in centimeters). 

[function link](https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/)

### Problem/Advice
Looking at other students work on the CHS Sigma Wiki was helpful in understanding how to approach this assignment, because at first I wasn't sure what a function was supposed to do. Functions are really invaluable in coding, because they can really simplify your code, making it easier for others to read and understand. 

### Wiring
![wiring diagram](http://wiki.chssigma.com/images/5/50/Ultrasonic_Sensor_with_Servo.PNG)
Credit: Imogen A. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Imogen%27s_Engineering_2_Notebook#Wiring_.26_Pictures)

## LCD Backpack 
This assignment I learned how to use a backpack. I used an LCD screen, a backpack, a button, and an Arduino. When the button was pressed the counter shown by the LCD screen would go up by 1. LCD backpacks are important because they reduce the amount of digital pins needed. This is very important if there are many components of your circuit that need to wired and you need many digital pins. 

### Problem/Advice
A problem I had with this assignment was that the number shown on the LCD screen was for microseconds passed, not the number of clicks. Instead of just saying buttonState == HIGH, one of the requirements for the if statement has to be "previousbuttonState == LOW". You need two variables. Another big problem I had was that my button wasn't pushed in all the way; this problem cost me a couple days. If there's a problem and you're not sure what it is, it's a good idea to check your wiring. 

### Wiring
![wiring diagram](http://wiki.chssigma.com/images/5/5d/Capswitch%601.PNG)
Credit: Paul B. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Paul%27s_Engineering_2_Notebook#Wiring_and_Pictures)

## Hello LCD
This assignment I learned how to use and LCD screen. I used an LCD screen and an Arduino. The goal was to get the LCD screen to print "Hello". I had a lot of very easily solvable problems with this assignment. 

### Problem/Advice
I also used wires in the beginning, instead of an LCD screen with male leads. Cutting all the wires evenly was a Sisyphean task and ended up being useless. The hardest part about this assignment was the wiring. Be very careful when wiring, because that can make a relatively simple assignment difficult. 

### Wiring
![wiring diagram](http://wiki.chssigma.com/images/e/e0/Lcdcap1.PNG)
Credit: Paul B. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Paul%27s_Engineering_2_Notebook#Wiring_and_Pictures)

## LED Blink Revisited 
This assignment was a refresher on how to blink an LED using an Arduino, and also forced us to use analog pins instead of digital pins to get the LED to fade. Not only did we have to make the LED fade, but the serial monitor had to display a certain number of xs, corresponding to the brightness of the LED.

### Problem/Advice
The main issue with this assignment is just remembering what you did in the previous year. Looking back at old code can serve as a refresher.

### Wiring
![wiring diagram](http://wiki.chssigma.com/images/e/e8/Fritzing_LED_fade.PNG)
Credit: Imogen A. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Imogen%27s_Engineering_2_Notebook#Wiring_.26_Pictures)
