#include <CapacitiveSensor.h>

//******Global defines**********************************************************

#define RedLedPin      (9)
#define BlueLedPin     (10)
#define GreenLedPin    (11)

//******Global functions prototypes*********************************************

void LED_Init(void);
void UartInit(void);



//*****Main setup function******************************************************
void setup() {
  // put your setup code here, to run once:
  UartInit();
  LED_Init();

  CapSenseInit();
}



//*****Main loop function*******************************************************
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
      uartRead();
  }
    analogWrite(RedLedPin, 50);
    analogWrite(BlueLedPin, 50);
    analogWrite(GreenLedPin, 50);
    delay(100);
  //CapSenseReadButton();


}
