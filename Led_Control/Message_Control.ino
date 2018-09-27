//**************message control defines*****************************************
#define commRxPin  30
#define commTxPin  31

//**************message control init function***********************************

void UartInit()
{
    Serial.begin(9600);
}

void uartRead()
{
    int red = 0, green = 0, blue = 0;
    while (Serial.available() > 0)
    {
        //read one value at a time
        red = Serial.parseInt();
        green = Serial.parseInt();
        blue = Serial.parseInt();
        SetSerialValues(red, green, blue);
    }
}
