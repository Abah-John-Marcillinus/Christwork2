int trigger_pin=8;
int echo_pin=9;
int distance;
long duration;

void setup(){
  //put your code here, to run onec;
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, OUTPUT);
}
void loop(){
  //put your main code here, to run repeadly:
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);//pulse the program for 2 micro seconds->1000000 micro second:
  digitalWrite(trigger_pin, HIGH); // apply 5v to trigger pin:
  delayMicroseconds(10);//pulse the program for 2 micro seconds->1000000 micro second:
  digitalWrite(echo_pin, LOW); // apply 0v to trigger pin:

  duration = pulseIn(echo_pin, HIGH);
  distance = (duration / 2)/29.1;

  Serial.print("Distance:");
  Serial.print(distance); // this is actual distance
  Serial.println("CM");
  
}
