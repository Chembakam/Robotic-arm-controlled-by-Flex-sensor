#include <Servo.h>

#define S0 A0    //Sensor Pin S0

#define S1 A1     //Sensor Pin S1

#define S2 A2    //Sensor Pin S2


Servo myservo1;

Servo myservo2;

Servo myservo3;



int sensorValue1 = 0;

int sensorValue2= 0;

int sensorValue3= 0;

int val1, val2, val3;


void setup()

{
 
 
 myservo1.attach(8);
 
 myservo2.attach(9);
 
 myservo3.attach(12);

}
void loop()

{
//Reading Analog Value
 
  int sensorValue1 = analogRead(S0);
 
 delay(150);
 
 int sensorValue2 = analogRead(S1);
 
 delay(150);
int sensorValue3 = analogRead(S2);



//Displaying Analog Value
 
 Serial.print("sensorValue");
  Serial.print("  ");
 
Serial.print("sensorValue1");
  Serial.print("  ");

  Serial.print("sensorValue2  ");
Serial.print("  ");
 delay(150);

//Action


 val1 = map (sensorValue1, 552, 270, 0, 180);         //mapped values from flexsensor1

 myservo1.write(val1);
   
 delay(50);
  
  
 val2 = map (sensorValue2, 477, 710, 0 , 180);                //mapped values from flexsensor2

  myservo2.write(val2);

 delay(50);

val3 = map (val3, 237, 340, 0 , 180);     //mapped values from flexsensor3

delay(50);
}

