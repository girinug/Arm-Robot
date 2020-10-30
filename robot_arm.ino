#include <Servo.h>
#define RODA1 0
Servo Roda1; //PENJEPIT
Servo myserpo2; //NAIKTURUN
Servo myserpo3;
Servo myserpo4;
Servo myserpo5; //KANANKIRI

void setup() {   
  Serial.begin(9600);
}

void loop() {
while (Serial.available() != 0) //memantau data pada port serial
{
char data = Serial.read();
//Serial.print(data);
delay(100);
if ( data == 'U'){
//Serial.print("Up"); //menampilkan data dari serial
naik();
delay(100);
}
else if (data == 'D') {
//Serial.print("Down"); //menampilkan data dari serial
turun();
delay(100);
}
else if (data == 'L') {
//Serial.print("Left"); //menampilkan data dari serial
kiri();
delay(100);
}
else if (data == 'R') {
//Serial.print("Right"); //menampilkan data dari serial
kanan();
delay(100);
}
else if (data == 'J') {
//Serial.print("Jepit"); //menampilkan data dari serial
jepit();
delay(100);
}
else if (data == 'P') {
//Serial.print("Lepas"); //menampilkan data dari serial
lepas();
delay(100);
}
}
}
void naik(){  
  myserpo4.attach(2);
  myserpo4.write(90);
  delay(1000);
}
void turun(){ 
  myserpo4.attach(2); 
  myserpo4.write(-90);
  delay(1000);
}
void kanan(){   
  myserpo5.attach(4); 
  myserpo5.write(180);
  delay(1000);
}
void kiri(){   
  myserpo5.attach(4); 
  myserpo5.write(-180);
  delay(1000);
}
void lepas() {
 Roda1.attach(RODA1);
 Roda1.write(-380);
 delay(2000);
}
void jepit() {
 Roda1.attach(RODA1);
 Roda1.write(300);
 delay(2000);
 //delay(4000);
 //Roda1.write(0);
 //delay(2000); 
 //Roda1.write(-300);
 //delay(100);
 //Roda1.write(0);
 //delay(400); 
}
void ngangguk(){  
  myserpo2.write(60);
  delay(300);
  myserpo2.write(-60);
  delay(300);
}

