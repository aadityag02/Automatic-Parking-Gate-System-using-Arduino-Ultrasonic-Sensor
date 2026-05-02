#include <Servo.h> 
Servo myservo;    
int pos = 0; 
int cm = 0; 
long readUltrasonicDistance(int triggerPin, int echoPin){ 
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(triggerPin, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(triggerPin, LOW); 
  pinMode(echoPin, INPUT); 
  return pulseIn(echoPin, HIGH); 
} 
void setup() { 
  digitalWrite(3,LOW); 
  digitalWrite(2,LOW); 
  pinMode(13,OUTPUT); 
  pinMode(12,OUTPUT); 
  myservo.attach(9);  
  Serial.begin(9600); 
} 
 
void loop() { 
   cm = 0.01723 * readUltrasonicDistance(6, 7); 
  Serial.println(cm); 
  if(cm<5) { 
    digitalWrite(12,HIGH); 
    digitalWrite(13,LOW); 
    myservo.write(105); 
    delay(3000); 
  }  
  else{ 
    digitalWrite(13,HIGH); 
    digitalWrite(12,LOW); 
    myservo.write(30); 
    delay(500); 
  }                                   
} 
