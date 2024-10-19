# PLC Sorting Station Using RFID

## Overview
The **PLC Sorting Station Using RFID** project aims to develop an advanced sorting system that enhances efficiency and automation in industrial environments. By leveraging RFID technology for wireless object identification and tracking, this system provides real-time sorting capabilities. The project utilizes Siemens S7-1500 PLC, ESP32 module, and Node-RED for seamless data integration and visualization.

---

## Table of Contents
- [Features](#features)
- [Technologies](#technologies)
- [Hardware Components](#hardware-components)
- [Software Setup](#software-setup)
- [Usage](#usage)
- [Testing and Results](#testing-and-results)
- [Troubleshooting](#troubleshooting)
- [Future Work](#future-work)
- [Contributing](#contributing)
- [License](#license)

---

## Features
- **Real-time object identification:** Utilizes RFID technology for accurate tracking.
- **Automation:** Managed by Siemens S7-1500 PLC for efficient sorting processes.
- **User-friendly interface:** Dashboard built with Node-RED for easy monitoring and control.
- **Versatility:** Supports multiple objects with unique RFID tags.

---

## Technologies
- **Hardware:**
  - Siemens S7-1500 PLC
  - ESP32 Module
  - RFID Reader
  - Solenoid Valves
  - Sensors
  - Conveyors
- **Software:**
  - Node-RED
  - PLC programming environment (e.g., TIA Portal)

---

## Hardware Components
1. Siemens S7-1500 PLC
2. ESP32 Module
3. RFID Reader
4. RFID Tags
5. Two Double-Acting Solenoid Valves
6. Five Sensors
7. Four Conveyors

---

## Software Setup
1. **Node-RED:** Ensure Node-RED is installed. [Installation Guide](https://nodered.org/docs/getting-started/installation).
2. **PLC Environment:** Install TIA Portal or your preferred PLC programming environment.

---

## Usage
1. Ensure all hardware components are connected according to the wiring diagrams.
2. Power on the system and start Node-RED.
3. Place objects with RFID tags on the conveyor; the system will automatically sort them based on predefined criteria.

---

## Testing and Results
The sorting station has been tested to ensure accurate RFID tag reading and effective sorting. Detailed results and performance metrics are documented in the `tests` folder.

---

## Troubleshooting
- **Issue:** RFID reader not detecting tags.
  - **Solution:** Check connections and ensure tags are within the reader's range.
  
- **Issue:** Solenoid valve not activating.
  - **Solution:** Verify the PLC code and ensure the correct signals are being sent from the ESP32.

---

## Future Work
- Explore additional automation features, such as predictive sorting based on historical data.
- Expand the system to handle a broader range of objects and sorting criteria.
- Integrate machine learning algorithms for enhanced decision-making.

---

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Submit a pull request detailing your changes.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---
