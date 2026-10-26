#include <Arduino.h>
#include <HIRO.h>

#include <Arduino.h>
#include <HIRO_Motion.h>

// Instantiate the global robot object instance
HIRO myRobot;

void setup() {
    Serial.begin(115200);
    delay(2000); // Allow serial pipeline stabilization
    
    Serial.println("Initializing H.I.R.O. Systems...");
    myRobot.begin();
    
    // Set initial neutral stance
    Serial.println("Setting initial neutral stance...");
    easyForward(myRobot, 0, 100); 
    delay(1000);
}

void loop() {
    // 1. Move Forward
    Serial.println("Action: Moving Forward...");
    easyForward(myRobot, 4, 2); 
    
    
    // 2. Move Backward
    Serial.println("Action: Moving Backward...");
    easyBackward(myRobot, 4, 2); 
}