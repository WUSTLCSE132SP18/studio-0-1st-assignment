void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("0 sec have elapsed");
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(900);
  int time = (1+millis())/1000;
  Serial.print(time);
  Serial.println(" sec has elapsed");
}
