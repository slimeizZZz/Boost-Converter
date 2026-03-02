int pwm=9;
int feedback=A0;
int dt=50;
float max=15.0;

void setup() {
  Serial.begin(9600);
  pinMode(pwm,OUTPUT);
  pinMode(feedback,INPUT);

  TCCR1B = (TCCR1B & 0b11111000) | 0x01;
}

void loop() {
 
   float V=((analogRead(feedback))*5.0)/1024.0;

 float vout=V*3.96;
 Serial.println(vout);
 
 if(vout<=max){
  if(dt<200)  dt++;
 }

 else{
  if(dt>10)   dt--;
 }

  analogWrite(pwm,dt);
  delay(10);
}
