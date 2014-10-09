// Pin assignments
const int R_LED = 8;
const int Y_LED = 9;
const int G_LED = 10;
const int B_LED = 11;
const int W_LED = 12;

const int ledPin = 13;

// Variables will change :
int ledState = LOW;             // ledState used to set the LED

// Generally, you shuould use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

unsigned long counter = 0;

// constants won't change :
const long interval = 250;           // interval at which to blink (milliseconds)


void setup() {
  // set the digital pins as outputs:
  pinMode(R_LED, OUTPUT);  
  pinMode(Y_LED, OUTPUT);  
  pinMode(G_LED, OUTPUT);  
  pinMode(B_LED, OUTPUT);  
  pinMode(W_LED, OUTPUT);
  
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;
    
    counter++;
    
    unsigned int R = (counter & (0x01 << 4) );
    unsigned int Y = (counter & (0x01 << 3) );
    unsigned int G = (counter & (0x01 << 2) );
    unsigned int B = (counter & (0x01 << 1) );
    unsigned int W = (counter & (0x01 << 0) );
    
    digitalWrite(R_LED, R);
    digitalWrite(Y_LED, Y);
    digitalWrite(G_LED, G);
    digitalWrite(B_LED, B);
    digitalWrite(W_LED, W);
    

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
