#include <M5Stack.h>

int OUT_PIN = 26;    // g26  (PortB の左から２番目 (白)　
int INTERVAL = 1000;
int out_v = 0;

void setup() {
  // init lcd
  M5.begin();
  M5.Power.begin();
  Serial.begin(115200);
  pinMode(OUT_PIN, OUTPUT);
  M5.Lcd.clear(BLACK);
  M5.Lcd.setTextColor(YELLOW);
  M5.Lcd.setTextSize(2);
}

void loop() {
  digitalWrite(OUT_PIN, out_v);

  M5.Lcd.fillRect(95, 25, 100, 25, BLACK);
  if (out_v == 1) {
    M5.Lcd.setCursor(95, 25); M5.Lcd.print("LED On");
    Serial.println("LED On");
  } else {
    M5.Lcd.setCursor(95, 25); M5.Lcd.print("LED Off");
    Serial.println("LED Off");
  }
  M5.update();
  delay(INTERVAL);
  out_v = out_v == 0 ? 1 : 0;
}
