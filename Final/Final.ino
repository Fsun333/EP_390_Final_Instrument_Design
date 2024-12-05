//------------------------------- MIC -------------------------------// 
const int MIC_PIN = A5;  
int MIC_state;       

//------------------------------- Button -------------------------------// 
const int TOUCH_PIN1 = A3;  
int Touch1_state;      

// Button variables
const int buttonPin = A3;
int buttonState;

const int button2Pin = A1;
int button2State;

const int button3Pin = A2;
int button3State;


const int button4Pin = A4;
int button4State;


const int button5Pin = A7;
int button5State;

const int button6Pin = D4;
int button6State;

//  MIDI Potentiometer variables
const int potPin = A6;
int potValue = 0;


void setup() {
  Serial.begin(9600);          
  //------------------------------- MIC -------------------------------// 
  pinMode(MIC_PIN, INPUT); 
 
  //------------------------------- Touch -------------------------------// 
  pinMode(TOUCH_PIN1, INPUT);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(button4Pin, INPUT_PULLUP);
  pinMode(button5Pin, INPUT_PULLUP);
  pinMode(button6Pin, INPUT_PULLUP);

  pinMode(potPin, INPUT);
}

void loop() {
  //------------------------------- MIC -------------------------------// 
  MIC_state = digitalRead(MIC_PIN); 
  Serial.print("MIC: "); 
  Serial.println(MIC_state);  
 
  //------------------------------- Touch -------------------------------// 
  Touch1_state = digitalRead(TOUCH_PIN1);
  Serial.print("Touch1: ");
  Serial.println(Touch1_state);

  /**************************** BUTTON ****************************/

  buttonState = digitalRead(buttonPin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);
  button5State = digitalRead(button5Pin);
  button6State = digitalRead(button6Pin);

  Serial.print("Button: "); // Header
  Serial.println(buttonState);   // Value

  Serial.print("Button2: "); // Header
  Serial.println(button2State);   // Value
  
  Serial.print("Button3: "); // Header
  Serial.println(button3State);   // Value

  Serial.print("Button4: "); // Header
  Serial.println(button4State);   // Value

  Serial.print("Button5: "); // Header
  Serial.println(button5State);   // Value

  Serial.print("Button6: "); // Header
  Serial.println(button6State);   // Value


  /**************************** POTENTIOMETER ****************************/
 //potValue = analogRead(potPin);

  //Serial.print("Pot: ");
  //Serial.println(potValue);


  delay(50);
} 


