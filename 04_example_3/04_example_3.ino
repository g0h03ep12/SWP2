#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

int toggle_state(int toggle){
  
/* if문 이용 */ 
  if (toggle == 0){
    return 1;
  }
  else{
    return 0;    
  }  

/* 삼항 연산자 사용
  return toggle == 0? 1:0;
*/ 

/* 수학적으로 접근
  return (toggle+1)%2;
*/

}
