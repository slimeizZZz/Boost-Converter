int pwm=9;
int feedback=A0;
int dt=50;
float max=15.0;

void setup() {
  //setarea pinilor
  Serial.begin(9600);
  pinMode(pwm,OUTPUT);
  pinMode(feedback,INPUT);

  TCCR1B = (TCCR1B & 0b11111000) | 0x01;
}

void loop() {
 
   float V=((analogRead(feedback))*5.0)/1024.0;//convertirea valorilor binare in tensiune

 float vout=V*3.96;  //calculul potentialului de la catodul diodei
 Serial.println(vout);
 
 if(vout<=max){
  if(dt<200)  dt++;  //cresc duty cycle ul pana cand vout e cu putin mai mare decat vmax 
 }

 else{
  if(dt>10)   dt--;  //scad duty cycle ul pana cand tensiunea vout a scazut sub 15V si se reia for ul la infinit
 }

  analogWrite(pwm,dt);
  delay(10);
}
