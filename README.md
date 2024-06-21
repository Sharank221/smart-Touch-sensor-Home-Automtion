# Home Automation System with ESP8266 and Blynk

## Overview

This project sets up a simple home automation system using an ESP8266 microcontroller, a touch sensor, and a relay. The system integrates with the Blynk platform, enabling remote monitoring and control through a mobile app. Key functionalities include toggling the relay state when the touch sensor is activated and updating this state on the Blynk app.

## Features

- **Remote Control:** Control the relay remotely using the Blynk mobile app.
- **Touch Sensor Activation:** Toggle the relay state with a touch sensor.
- **Status Update:** Real-time update of relay status on the Blynk app.
- **Debounce Mechanism:** Prevents multiple triggers from a single touch with a debounce delay.

## Setup

### Hardware Requirements

- ESP8266 microcontroller (e.g., NodeMCU)
- Touch sensor module
- Relay module
- Breadboard and connecting wires

### Software Requirements

- Arduino IDE with ESP8266 board support
- Blynk mobile app (iOS or Android)

### Installation

1. **Arduino Setup:**
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/Main/Software).
   - Install the ESP8266 board support following [this guide](https://github.com/esp8266/Arduino#installing-with-boards-manager).

2. **Blynk Setup:**
   - Download and install the Blynk app from the App Store or Google Play.
   - Create a new Blynk account and project.
   - Obtain the Blynk authentication token from the project settings.

3. **Libraries:**
   - Install the necessary libraries in Arduino IDE:
     - Blynk library: `Sketch -> Include Library -> Manage Libraries -> Search for "Blynk" -> Install`
     - Additional libraries as required by your touch sensor or relay module.

4. **Configuration:**
   - Open the Arduino IDE and load the provided sketch (`*.ino` file).
   - Replace `WIFI_SSID`, `WIFI_PASSWORD`, and `BLYNK_AUTH_TOKEN` with your WiFi credentials and Blynk authentication token respectively.

5. **Upload:**
   - Connect your ESP8266 board to your computer via USB.
   - Select the correct board and COM port in Arduino IDE.
   - Click on the upload button to flash the sketch to your ESP8266.

6. **Operation:**
   - Power up your ESP8266 board and touch sensor/relay setup.
   - Open the Blynk app on your mobile device.
   - Control the relay.

