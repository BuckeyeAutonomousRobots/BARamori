#include <Arduino.h>
#include <HIRO.h>

// Initialize the global robot object instance
HIRO myRobot;

void setup() {
    Serial.begin(115200);
    delay(2000); // Allow serial console stability layer to connect
    
    Serial.println("Initializing H.I.R.O. Robot System...");
    myRobot.begin();
    
    // Fixed Scope: Call the function directly on the myRobot object
    Serial.println("Setting initial neutral stance...");
    myRobot.easyForward(myRobot, 0, 100); 
    delay(1000);
    Serial.println("System Ready.");
}

void loop() {
    // 1. Move Forward
    Serial.println("Action: Moving Forward...");
    myRobot.easyForward(myRobot, 2, 100); // Fixed Scope
    
    // 2. Wait 2 seconds
    Serial.println("Holding stance...");
    delay(2000);
    
    // 3. Move Backward
    Serial.println("Action: Moving Backward...");
    myRobot.easyBackward(myRobot, 2, 100); // Fixed Scope
    
    // 4. Wait 2 seconds
    Serial.println("Holding stance...");
    delay(2000);
}