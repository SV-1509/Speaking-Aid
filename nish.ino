

void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
Serial.begin(9600);
}
void tune1()
{
   tone(11, 300, 200);
  delay(200);
  noTone(11);
  }
  void tune2()
{
  tone(11, 600, 200);
  delay(200);
  noTone(11);
  }
  void tune3()
{
  tone(11,900, 200);
  delay(200);
  noTone(11);
  }
  void tune4()
{
  tone(11, 1200, 200);
  delay(200);
  noTone(11);
  }
  void tune5()
{
  tone(11, 1500, 200);
  delay(200);
  noTone(11);
  }
  void tune6()
{
  tone(11, 1800, 200);
  delay(200);
  noTone(11);
  }
  void tune7()
{
  tone(11, 2100, 200);
  delay(200);
  noTone(11);
  }
  void tune8()
{
  tone(11, 2400, 200);
  delay(200);
  noTone(11);
  }
  void tune9()
{
  tone(11, 2700, 200);
  delay(200);
  noTone(11);
  }
void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)==1)
  {
    tune1();
    Serial.println('1');
    }
else if(digitalRead(3)==1)
  {
    tune2();
    Serial.println('2');
    }
 else if(digitalRead(4)==1)
  {
    tune3();
    Serial.println('3');
    }
 else if(digitalRead(5)==1)
  {
    tune4();
    Serial.println('4');
    }
else if(digitalRead(6)==1)
  {
    tune5();
    Serial.println('5');
    }
else if(digitalRead(7)==1)
  {
    tune6();
    Serial.println('6');
    }
 else if(digitalRead(8)==1)
  {
    tune7();
    Serial.println('7');
    }
 else if(digitalRead(9)==1)
  {
    tune8();
    Serial.println('8');
    }
else if(digitalRead(10)==1)
  {
    tune9();
    Serial.println('9');
    }
}
