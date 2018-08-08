#define RED_PIN 3
#define BLUE_PIN 6
#define GREEN_PIN 5

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  analogWrite(GREEN_PIN, 125); //125: ~middle point of the range 0~255
  analogWrite(RED_PIN, 50);  
  analogWrite(BLUE_PIN, 75);  
}
// Play around with the parameters of analogWrite functions
