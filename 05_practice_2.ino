#define PIN_LED 7
int count;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
}

void loop() {
  digitalWrite(PIN_LED, LOW);
  delay(1000);
  for(count = 10; count >= 0; --count){
    if(count % 2 == 0){
      digitalWrite(PIN_LED, HIGH);
      delay(100);
    }
    else{ 
      digitalWrite(PIN_LED, LOW);
      delay(100);
    }
  }
  
  while(true){}

}
