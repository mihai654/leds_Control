// Leds control functions

//*************Local defines****************************************************
#define RedLightOutput(percent)          analogWrite(RedLedPin, ((percent * 25)/10))
#define BlueLightOutput(percent)         analogWrite(BlueLedPin, ((percent * 25)/10))
#define GreenLightOutput(percent)        analogWrite(GreenLedPin, ((percent * 25)/10))


//*************Local function prototypes****************************************

char CheckValue(char Value);


//******************************************************************************
//*************Global functions*************************************************
//******************************************************************************
// Description: Initialization of outputs for leds function
//
// Parameters: none
//
//return Value: None
void LED_Init()
{
    pinMode(RedLedPin, OUTPUT);
    pinMode(BlueLedPin, OUTPUT);
    pinMode(GreenLedPin, OUTPUT);
    //turn on all leds at 50 percent
    //analogWrite(RedLedPin, 50);
    //analogWrite(BlueLedPin, 50);
    //analogWrite(GreenLedPin, 50);
    RedLightOutput(50);
    BlueLightOutput(50);
    GreenLightOutput(50);
}

//==============================================================================
// Description: Set serial data to leds outputs
//
// Parameters: red = the percent value to set the red color
//             green = the percent value to set the green color
//             blue = the percent value to set the blue color
//
//return Value: None
void SetSerialValues(char red, char green, char blue)
{
    //the value received must be in percent so set the limits 
    red = CheckValue(red);
    green = CheckValue(green);
    blue = CheckValue(blue);
    //set the outputs percent value
    RedLightOutput(red);
    BlueLightOutput(green);
    GreenLightOutput(blue);
}
//==============================================================================

//******************************************************************************
//*************Local functions*************************************************
//==============================================================================
// Description: Check if the value is in range
//
// Parameters: Value = the number to check if it is between the limits 0 - 100
//
//return Value: the received value if no modifications were needed.
char CheckValue(char Value)
{
    if (0 > Value)
    {
        Value = 0;
    }
    else if (100 < Value)
    {
        Value = 100;
    }
    return Value;
}
