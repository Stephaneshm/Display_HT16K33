source : http://lygte-info.dk/project/DisplayDriver%20UK.html



#include <LEDDisplayDriver.h>
#define SDA_PIN A4
#define SCL_PIN A5

LEDDisplayDriver display(SDA_PIN, SCL_PIN);


/****************************************************************/
void setup() {
  Serial.begin(115200);
  Serial.println(F("ht16k33 light test v0.02"));
  Serial.println();
  display.begin();
 display.setBrightness(5); // 0 to 7 or 15 
 display.setOn(false);   
 display.setOn(true);   
display.showNum(89.67);
delay(5000);
byte data[]={digitD,digit0,digitN,digitE};
display.showDigits(data,0,4);
delay(5000);
display.showNum1decimal(24.3,0,3);
display.showDigit(digitDeg,3);
display.update();
delay(5000);
display.showText("0000");
delay(5000);
display.clear();
display.showMinus(0, 1);
delay(5000);
display.clear();
display.showNumWithPrefix(digitMinus,7);
delay(5000);
display.showHex(12);
delay(5000);
display.showBin(6);
delay(5000);
display.clear();
display.showNum2Left(42);
delay(5000);
display.clear();
display.showNum2Center(42);
delay(5000);
display.clear();
display.showNum2Right(42);
delay(5000);
display.clear();
display.showNum2Left(14);// I could also have used the full call: display.showNum(hour,0,2);
display.showNum2Right(24);// I could also have used the full call: display.showNum(minutes,2,2);
display.update();// Transfer the above 3 calls to the display

}

/****************************************************************/
void loop() {

display.showIndicators(0xff);
delay(1000);
display.showIndicators(0);
delay(1000);

} // loop  
    
