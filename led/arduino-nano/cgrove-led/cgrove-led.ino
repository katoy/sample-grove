// See
//    http://wiki.seeedstudio.com/Grove-Red_LED/
//

int DOUT = 3;  // シールの D3に接続 
int INTERVAL = 1000;

void setup() {
  pinMode(DOUT, OUTPUT);
}

void loop() {
  digitalWrite(DOUT, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(INTERVAL);            // wait for a second
  digitalWrite(DOUT, LOW);    // turn the LED off by making the voltage LOW
  delay(INTERVAL);            // wait for a second
}
