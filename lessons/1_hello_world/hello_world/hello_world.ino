void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello from setup!");
}

void loop() {
   Serial.println("Hello from loop!");
   delay(1000);
}
