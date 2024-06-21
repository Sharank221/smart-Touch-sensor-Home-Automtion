#define BLYNK_TEMPLATE_ID "TMPL3Psw2hOn7"
#define BLYNK_TEMPLATE_NAME "Touch sensor automation"
#define BLYNK_AUTH_TOKEN "Zht3s3PjMdDmj4pMOgZgSDy12g3L4023"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = BLYNK_AUTH_TOKEN ; // Enter the Auth token from Blynk
char ssid[] = "Andy Dufresne"; // Enter your WiFi SSID
char pass[] = "sana@001"; // Enter your WiFi password

const int touchPin = D2; // Pin connected to touch sensor
const int relayPin = D1; // Pin connected to relay

bool relayState = LOW; // Initial state of the relay

BlynkTimer timer;

void setup() {
  // Debug console
  Serial.begin(9600);

  // Setup WiFi connection
  Blynk.begin(auth, ssid, pass);

  pinMode(touchPin, INPUT);
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, relayState); // Set relay to initial state

  // Setup a function to be called every 100 ms
  timer.setInterval(100L, checkTouchSensor);
}

void checkTouchSensor() {
  if (digitalRead(touchPin) == HIGH) {
    relayState = !relayState; // Toggle relay state
    digitalWrite(relayPin, relayState);
    Blynk.virtualWrite(V1, relayState); // Update Blynk app with the relay state
    delay(500); // Debounce delay
  }
}

void loop() {
  Blynk.run();
  timer.run(); // Initiates Blynk Timer
}
