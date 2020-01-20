
#include "SD.h"
#define SD_ChipSelectPin 10
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;
void setup() {
  pinMode(10,OUTPUT);
  digitalWrite(10, HIGH);
  // put your setup code here, to run once:
  tmrpcm.speakerPin = 9;
  //SPI.begin();
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) 
{
Serial.println("SD fail");
return;
tmrpcm.setVolume(10);
}

tmrpcm.setVolume(6);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(16,INPUT);
pinMode(15,INPUT);
pinMode(14,INPUT);

}
void tune1()
{
   tmrpcm.play("1.wav");
  }
  void tune2()
{
 tmrpcm.play("2.wav");
  }
  void tune3()
{
 tmrpcm.play("3.wav");
  }
  void tune4()
{
  tmrpcm.play("4.wav");
  }
  void tune5()
{
  tmrpcm.play("5.wav");
  }
  void tune6()
{
  tmrpcm.play("6.wav");
  }
  void tune7()
{
 tmrpcm.play("7.wav");
  }
  void tune8()
{
tmrpcm.play("8.wav");
  }
  void tune9()
{
  tmrpcm.play("9.wav");
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
 else if(digitalRead(16)==1)
  {
    tune7();
    Serial.println('7');
    }
 else if(digitalRead(15)==1)
  {
    tune8();
    Serial.println('8');
    }
else if(digitalRead(14)==1)
  {
    tune9();
    Serial.println('9');
    }
}
