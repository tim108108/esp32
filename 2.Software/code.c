const int ledCount = 10;    // 總共有幾顆燈

int ledPins[] = {
  16, 17, 5, 18, 19, 21, 3, 1, 22, 23
};   // 使用一陣列來記錄所使用的GPIOs


void setup() {
  // 用一個for迴圈來設定所有的LED模式
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
    for (int thisLed = 0; thisLed < ledCount; thisLed++){
      digitalWrite(ledPins[thisLed], HIGH);
      delay(50);
      digitalWrite(ledPins[thisLed], LOW);
      delay(50);
    }
      for (int thisLed = ledCount-1; thisLed >= 0; thisLed--){
      digitalWrite(ledPins[thisLed], HIGH);
      delay(50);
      digitalWrite(ledPins[thisLed], LOW);
      delay(50);
    }

}