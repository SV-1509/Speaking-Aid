
#include "SD.h"
#define SD_ChipSelectPin 10
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;
TMRpcm audio;
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
audio.CSPin = SD_ChipSelectPin;
}


pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(16,INPUT);
pinMode(15,INPUT);
pinMode(14,INPUT);
pinMode(8,INPUT);

}
void rec1()
{
   audio.startRecording("1.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("1.wav");
 }
 void rec2()
{
   audio.startRecording("2.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("2.wav");
 }
 void rec3()
{
   audio.startRecording("3.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("3.wav");
 }
 void rec4()
{
   audio.startRecording("4.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("4.wav");
 }
 void rec5()
{
   audio.startRecording("5.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("5.wav");
 }
 void rec6()
{
   audio.startRecording("6.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("6.wav");
 }
 void rec7()
{
   audio.startRecording("7.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("7.wav");
 }
 void rec8()
{
   audio.startRecording("8.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("8.wav");
 }
 void rec9()
{
   audio.startRecording("9.wav", 16000, A5);
   delay(20000);
   audio.stopRecording("9.wav");
 }
 void sound1()
{
 tmrpcm.play("1.wav");
  } 
  void sound2()
{
 tmrpcm.play("2.wav");
  }
  void sound3()
{
 tmrpcm.play("3.wav");
  }
  void sound4()
{
  tmrpcm.play("4.wav");
  }
  void sound5()
{
  tmrpcm.play("5.wav");
  }
  void sound6()
{
  tmrpcm.play("6.wav");
  }
  void sound7()
{
 tmrpcm.play("7.wav");
  }
  void sound8()
{
tmrpcm.play("8.wav");
  }
  void sound9()
{
  tmrpcm.play("9.wav");
  }
  void sound()
  {
    if(digitalRead(2)==1)
  {
    sound1();
    Serial.println('1');
    }
else if(digitalRead(3)==1)
  {
    sound2();
    Serial.println('2');
    }
 else if(digitalRead(4)==1)
  {
    sound3();
    Serial.println('3');
    }
 else if(digitalRead(5)==1)
  {
    sound4();
    Serial.println('4');
    }
else if(digitalRead(6)==1)
  {
    sound5();
    Serial.println('5');
    }
else if(digitalRead(7)==1)
  {
    sound6();
    Serial.println('6');
    }
 else if(digitalRead(16)==1)
  {
    sound7();
    Serial.println('7');
    }
 else if(digitalRead(15)==1)
  {
    sound8();
    Serial.println('8');
    }
else if(digitalRead(14)==1)
  {
    sound9();
    Serial.println('9');
    }
  }

  void rec()
  {
    if(digitalRead(2)==1)
  {
    rec1();
    Serial.println('1');
    }
else if(digitalRead(3)==1)
  {
    rec2();
    Serial.println('2');
    }
 else if(digitalRead(4)==1)
  {
    rec3();
    Serial.println('3');
    }
 else if(digitalRead(5)==1)
  {
    rec4();
    Serial.println('4');
    }
else if(digitalRead(6)==1)
  {
    rec5();
    Serial.println('5');
    }
else if(digitalRead(7)==1)
  {
    rec6();
    Serial.println('6');
    }
 else if(digitalRead(16)==1)
  {
    rec7();
    Serial.println('7');
    }
 else if(digitalRead(15)==1)
  {
    rec8();
    Serial.println('8');
    }
else if(digitalRead(14)==1)
  {
    rec9();
    Serial.println('9');
    }
  }
void loop() {
  // put your main code here, to run repeatedly:
  
if (digitalRead(8)==HIGH)
{
  Serial.println('Playing');
  sound();
}
else
{
  Serial.println('Recording');
  rec();
}
}
