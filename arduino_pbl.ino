/* to know more about us visit our website www.futuregurukuls.in */
int trigPin1 = 13; // Trigger
int echoPin1 =12; // Echo
int trigPin2 =11; // Trigger
int echoPin2 =10; // Echo

long duration1, cm1,duration2,cm2;

void setup() {
Serial.begin (9600);
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);
pinMode(trigPin2, OUTPUT);
pinMode(echoPin2, INPUT);

}
void loop() {
// The sensor is triggered by a HIGH pulse of 10 or more microseconds.
// Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
digitalWrite(trigPin1, LOW);
delayMicroseconds(5);
digitalWrite(trigPin1, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);

pinMode(echoPin1, INPUT);
duration1 = pulseIn(echoPin1, HIGH);

cm1 = (duration1/2) / 29;

digitalWrite(trigPin2, LOW);
delayMicroseconds(2);
digitalWrite(trigPin2, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin2, LOW);

pinMode(echoPin2, INPUT);
duration2 = pulseIn(echoPin2, HIGH);

cm2 = (duration2/2) / 29;
/*if(cm1>50 && cm2>50)
{
  Serial.println("Video Playing");
}
else{*/
if (cm1<=15)
{
Serial.println("play/pause");
delay(500);
}

if(cm1>15 && cm1<=30)
{ Serial.println("vup");
  delay(500);
}
if(cm1>30 && cm1<=45)
{ Serial.println("vdn");
  delay(500);
}
if(cm2<=15)
{ Serial.println("next");
  delay(500);
}
if(cm2>15 && cm2<=30)
{ Serial.println("back");
  delay(500);
}
if(cm2>30 && cm2<=45)
{
  Serial.println("fullscreen");
  delay(500);
} 
}
