int led =13;
char input;

void setup() {
  // Put your setup code here to run once:60mins=120*1000*60=3600000 delay(3600000);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.print("press Y for 1 Hour Timer \n press N for 30 mins Timer");
 
}


void loop() {
  //Put your code here, to run repeatedly:
  input = Serial.read();
  if (input == 'Y'){
  digitalWrite(led, HIGH);
  delay(3600000); //1 hour delay
  digitalWrite(led, HIGT);
}//it will send data as 1 to turn on the led
  
  if(input== 'N') {
 digitalWrite(led, HIGH);
  delay(1800000); //30mins delay
  digitalWrite(led, HIGT);
  }
    
  
}
