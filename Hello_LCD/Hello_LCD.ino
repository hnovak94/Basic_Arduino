// Hello LCD
// Harriet Novak
// Goal: Get an LCD screen to display "hello, world"


#include <LiquidCrystal.h>


LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Pins for RS, EN, DB4, DB5, DB6, DB7

void setup () {


lcd.begin(16, 2); // screen has 16 columns and 2 rows

lcd.print("hello, world!"); // LCD screen prints 

 }


void loop () {

lcd.setCursor(0, 1); // Puts the cursor to the first spot in the second row, starts at 0

lcd.print(millis()/1000); // prints number of seconds
	
}
