#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Replace with your network credentials
char ssid[] = "WIFI_SSID";
char pass[] = "WIFI_PASSWORD";

// Replace with your Blynk Auth Token (you'll get this from the Blynk app)
char auth[] = "BLYNK_AUTH_TOKEN";

// Define the ESP32 pin connected to the LED
const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Initialize LED as OFF

  Blynk.begin(auth, ssid, pass);
  // You can also specify server and port if needed
  // Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);

}

void loop() {
  Blynk.run();
  // You can add other code here that needs to run repeatedly
}

// Blynk will automatically call this function when the state of Virtual Pin V1 changes
BLYNK_WRITE(V1) {
  int pinValue = param.asInt(); // Get the value sent from the Blynk app (0 or 1)
  digitalWrite(ledPin, pinValue); // Control the LED based on the received value
}