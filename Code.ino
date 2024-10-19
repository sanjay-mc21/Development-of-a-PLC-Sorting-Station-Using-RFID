
# RFID-Based Automation System

## Overview

This project implements an RFID-based automation system using an ESP8266 microcontroller. It reads RFID card data, connects to a Google Sheets backend to log data, and controls relays based on specific RFID tags.

### Features

- Reads RFID cards using the MFRC522 module.
- Connects to Wi-Fi and communicates with Google Sheets for data logging.
- Controls two relays based on specific RFID tags.
- Visual feedback using a buzzer.

## Table of Contents

- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [RFID Data](#rfid-data)
- [License](#license)

## Requirements

- ESP8266 microcontroller
- MFRC522 RFID reader
- Buzzer
- Two relay modules
- Arduino IDE
- Required libraries:
  - MFRC522
  - ESP8266WiFi
  - ESP8266HTTPClient

### Library Installation

1. Open Arduino IDE.
2. Go to **Preferences**.
3. In the **Additional Boards Manager URLs**, add:
