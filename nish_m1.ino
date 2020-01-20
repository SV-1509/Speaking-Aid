void setup() {
  // put your setup code here, to run once:
pinMode(13, INPUT);
pinMode(12, INPUT);
pinMode(11, INPUT);
pinMode(10, INPUT);
Serial.begin(9600);
}

void loop() {
   
   
   
  // put your main code here, to run repeatedly:
if(digitalRead(13)==1)
  {
 // play a note on pin 6 for 200 ms:
  tone(6, 330, 100);
  delay(100);
  // turn off tone function for pin 6:
  noTone(6);
 
  Serial.println('0');
  }
else if(digitalRead(12)==1)
  {
 // play a note on pin 6 for 200 ms:
  tone(6, 430, 100);
  delay(100);
  // turn off tone function for pin 6:
  noTone(6);
 
  Serial.println('1');
  }
else if(digitalRead(11)==1)
  {
 // play a note on pin 6 for 200 ms:
  tone(6, 530, 100);
  delay(100);
  // turn off tone function for pin 6:
  noTone(6);
 
  Serial.println('2');
  }
else if(digitalRead(10)==1)
  {
 // play a note on pin 6 for 200 ms:
  tone(6, 630, 100);
  delay(100);
  // turn off tone function for pin 6:
  noTone(6);
 
  Serial.println('3');
}
else{
Serial.println("Nothing");
noTone(6);
}}
