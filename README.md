# Smart_car_esp32

This project involves using an ESP32 microcontroller to read data from a DHT sensor and a soil moisture sensor. The soil moisture sensor is controlled by a servo motor to move it up and down into the soil. The collected data is then sent to a mobile application via Wi-Fi.

## Components

- ESP32
- DHT Sensor
- Soil Moisture Sensor
- Servo Motor
- Jumper Wires
- Breadboard

## Wiring

### DHT Sensor to ESP32

| DHT Sensor Pin   | ESP32 Pin  |
|------------------|------------|
| VCC              | 3.3V       |
| GND              | GND        |
| DATA             | GPIO 4     |

### Soil Moisture Sensor to ESP32

| Soil Moisture Sensor Pin | ESP32 Pin  |
|--------------------------|------------|
| VCC                      | 3.3V       |
| GND                      | GND        |
| AOUT                     | GPIO 34    |

### Servo Motor to ESP32

| Servo Motor Pin | ESP32 Pin  |
|-----------------|------------|
| VCC             | 5V         |
| GND             | GND        |
| Signal          | GPIO 18    |

## Setup

1. **Install Arduino IDE:**
   Download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).

2. **Add ESP32 Board to Arduino IDE:**
   - Open the Arduino IDE.
   - Go to `File` -> `Preferences`.
   - In the `Additional Board Manager URLs` field, add the following URL:
     ```
     https://dl.espressif.com/dl/package_esp32_index.json
     ```
   - Go to `Tools` -> `Board` -> `Boards Manager`.
   - Search for `ESP32` and install the latest version.

3. **Install Required Libraries:**
   - Install the `DHT` library by Adafruit.
   - Install the `WiFi` library (should be pre-installed with the ESP32 package).
   - Install the `Servo` library.

4. **Upload Code:**
   - Connect your ESP32 to the computer via USB.
   - Open the Arduino IDE and select your ESP32 board and port.
   - Upload the provided code.
