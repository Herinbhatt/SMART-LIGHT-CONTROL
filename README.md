# SMART-LIGHT-CONTROL

**COMPANY**:CODETECH IT SOLUTIONS

**NAME**:Herin bhatt

**INTERN ID**:CT08RPQ

**DOMAIN**:Internet Of Things

**BATCH DURATION**:January 23rd, 2025 to April 15th, 2025

**MENTOR NAME**:Neela Santhosh Kumar

# TASK DESCRIPTION

**Project: Basic Smart Light Control with ESP32 and Blynk**

Concept: This project demonstrates a fundamental smart lighting system where an LED (representing a light) connected to an ESP32 microcontroller can be turned ON and OFF remotely using the Blynk mobile application over a Wi-Fi connection.

**Hardware Components:**

- ESP32 Development Board
  
- LED (any color)
  
- 220-ohm Current Limiting Resistor
  
- Jumper Wires
  
- Breadboard

**Software:**

- Arduino IDE (with ESP32 board support installed)

- Blynk Library installed in Arduino IDE

- Blynk Mobile Application (available for Android and iOS)

**Wiring Diagram:**

- Connect the positive (longer) leg of the LED to one end of the 220-ohm resistor.

- Connect the other end of the resistor to one of the digital output pins on the ESP32 (e.g., GPIO 2).

- Connect the negative (shorter) leg of the LED to a GND (ground) pin on the ESP32.

![Image](https://github.com/user-attachments/assets/f32aa432-dec7-4872-9239-ea7caf579ceb)

**Blynk Mobile Application Setup:**

- Install Blynk App: Download and install the Blynk app on your smartphone.
- Create a New Project:
- Open the Blynk app and tap "Create New Project".
- Give your project a name (e.g., "Smart Light Control").
- Select "ESP32" as the hardware.
- Choose "Wi-Fi" as the connection type.
- Tap "Create".
- The app will send an Auth Token to your registered email address. Copy this token and replace "BLYNK_AUTH_TOKEN" in the Arduino code.

**Add a Button Widget:**

- In your Blynk project, tap the "+" icon to open the Widget Box.
- Select the "Button" widget.
- Tap on the newly added Button widget to open its settings.
- Name: Give it a name (e.g., "Light Control").
- PIN: Select "V1" (Virtual Pin 1).
- Mode: Choose "SWITCH" if you want a toggle button (ON/OFF) or "PUSH" if you want the light to be ON only while the button is pressed. "SWITCH" is generally better for light control.
- Output: Set "ON" to 1 and "OFF" to 0.
- Tap the back arrow to save the settings.

  ![Image](https://github.com/user-attachments/assets/539747d5-6788-43ca-9747-f5e39afc3163)
  ![Image](https://github.com/user-attachments/assets/11d04469-6dba-4702-a9c4-2d7039879ec5)
  
**How to Run the Project:**

**Upload Code to ESP32:**
- Connect your ESP32 to your computer using a USB cable.
- Open the Arduino IDE, select the correct board ("ESP32 Dev Module" or similar) and the correct port under the "Tools" menu.
- Enter your Wi-Fi SSID, password, and Blynk Auth Token in the Arduino code.
- Upload the code to your ESP32.
  
- Connect to Wi-Fi: Ensure your ESP32 successfully connects to your Wi-Fi network (you can monitor the Serial Monitor in the Arduino IDE for connection messages).
- Control from Blynk App: Open the Blynk app on your smartphone, open your "Smart Light Control" project, and tap the button you added. You should see the LED connected to your ESP32 turn ON and OFF. The Serial Monitor in the Arduino IDE will also show the values being 
  received from the Blynk app.

