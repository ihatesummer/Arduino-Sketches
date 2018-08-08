#define RED_PIN 3
#define BLUE_PIN 6
#define GREEN_PIN 5

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);  
  digitalWrite(BLUE, HIGH);  
}
