int LED = 13;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(LED, OUTPUT);
}
char data;
void loop() {
  while(Serial1.available()){
    data = (char)Serial1.read();
    if(data == '1'){
      digitalWrite(LED, HIGH);
      delay(1000);
    }
    else if(data == '0'){
      digitalWrite(LED, LOW);
      delay(1000);
    }
  }
}
