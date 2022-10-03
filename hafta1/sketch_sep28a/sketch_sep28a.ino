int result=0;
int leddelay=500;
int pTime=0;
void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(8, INPUT_PULLUP);
pinMode(12,OUTPUT);
digitalWrite(13, LOW);
}
void loop() {
  int cTime=millis();
  if (cTime-pTime > leddelay){
    digitalWrite(13,!digitalRead(13));
    pTime=cTime;
  }

  if (!digitalRead(8)) {
    while (!digitalRead(8));
    leddelay+=250;
    if (leddelay >2000) {
      leddelay=500;
      
    }
  }
  Serial.println(leddelay);
}
