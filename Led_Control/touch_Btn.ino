
CapacitiveSensor capSensor1 = CapacitiveSensor(32, 1);

void CapSenseInit()
{
    capSensor1.set_CS_AutocaL_Millis(0xFFFFFFFF);
}

byte CapSenseReadButton()
{
    long ReadTime = 0;
    ReadTime = capSensor1.capacitiveSensor(30);
    Serial.print(ReadTime);
    Serial.print("\t");
    delay(50);
   
}
