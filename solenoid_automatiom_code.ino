int temPin=A0;
int temValue;
int delayTime=200;
int redPin=8;
int bluePin=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(temPin, INPUT);
  pinMode(redPin, OUTPUT); 
  pinMode(bluePin, OUTPUT); 
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  temValue=analogRead(temPin);
  Serial.println(temValue);
  delay(delayTime);
  if (temValue>400){
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  if (temValue<400){
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, HIGH);

  }
}
