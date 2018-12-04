#define ledCar1Pin 0          // digital output pin for car1 LEDs
#define ledCar2Pin 1        // digital output pin for car2 LEDs
#define ledCar3Pin 2        // digital output pin for car3 LEDs
#define buttonPin 3         //button to pick a car

int i=0;
int carselect=3;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledCar1Pin, OUTPUT);
  pinMode(ledCar2Pin, OUTPUT);
  pinMode(ledCar3Pin, OUTPUT);
  pinMode(buttonPin, INPUT);
  //pinMode(ledButtonPin, OUTPUT)
  digitalWrite (ledCar1Pin, LOW);
  digitalWrite (ledCar2Pin, LOW);
  digitalWrite (ledCar3Pin, LOW);
  digitalWrite (buttonPin, HIGH);
  
}

void loop() {
  // Randomly pick a car
  carselect = random(0,3);
  digitalWrite (ledCar1Pin, LOW);
  digitalWrite (ledCar2Pin, LOW);
  digitalWrite (ledCar3Pin, LOW);
  if (digitalRead(buttonPin) == LOW){
  if (carselect == 0){
    //code for car1
    i=0;
    while (i < 3){
    digitalWrite (ledCar1Pin, HIGH);
      delay(500);
      digitalWrite (ledCar1Pin, LOW);
      delay(500);
      i++;
  }
  }
  else if (carselect == 1){
    //code for car 2
    i=0;
    while (i < 3){
    digitalWrite (ledCar2Pin, HIGH);
      delay(500);
      digitalWrite (ledCar2Pin, LOW);
      delay(500);
      i++;
    }
  }
  
  else if (carselect == 2){
    //code for car3
    i=0;
    while (i < 3){
    digitalWrite (ledCar3Pin, HIGH);
      delay(500);
      digitalWrite (ledCar3Pin, LOW);
      delay(500);
      i++;
    }
      
  }
  else {
    digitalWrite (ledCar1Pin, LOW);
    digitalWrite (ledCar2Pin, LOW);
    digitalWrite (ledCar3Pin, LOW);
  }
  }
    
  
 
}


