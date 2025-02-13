#include <ESP8266WiFi.h>
#include <WiFiManager.h>   

void setup() {

  Serial.begin(9600); /* Define baud rate for serial communication */
  WiFiManager wifiManager;
  wifiManager.resetSettings();
  wifiManager.autoConnect("AutoconnectAP");
  Serial.println("Connected.");
}

void loop() {

}