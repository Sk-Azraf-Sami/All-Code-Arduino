int Time; 
int distance; 

void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  delayMicroseconds(5);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  Time = pulseIn(3,HIGH);
  distance = 0.0343*Time/2;
  
  Serial.print("distance from sensor to object is = ");
  Serial.println(distance);
  
}
