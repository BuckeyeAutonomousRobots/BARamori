#include <Arduino.h>

// PIN_LED is automatically mapped to the onboard LED by the framework
void setup() {
    Serial.begin(115200);
    pinMode(PIN_LED, OUTPUT);
}

void loop() {
    digitalWrite(PIN_LED, HIGH);
    Serial.println("LED ON - Hello Pico 2W!");
    delay(1000);
    
    digitalWrite(PIN_LED, LOW);
    Serial.println("LED OFF");
    delay(1000);
}