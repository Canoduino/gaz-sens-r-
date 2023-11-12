#define sensor A0
#define buzzer 8
int gaz;

void setup() {
  
 pinMode(sensor, INPUT);
 pinMode(buzzer, OUTPUT); 

}
void loop() {

gaz = analogRead(sensor);
 if(gaz >= 120){
 tone(buzzer, 1000);
 delay(100);
 noTone(buzzer);
 delay(100); 
}
else{
  noTone(buzzer);
 }
}
