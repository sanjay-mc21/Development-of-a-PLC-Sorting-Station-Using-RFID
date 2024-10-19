# Development of a PLC Sorting Station Using RFID

**Team Name:** Team Automata  
**Team Members:** Sanjay K, Logesh J, Hrithik J R, Deva P, Sriharish J  
**Title:** Development of a PLC Sorting Station Using RFID  
**Date:** 05 NOV 2023  
**Institution/Organization:** Bannari Amman Institute of Technology  

---

## Abstract

This project presents the development of an advanced RFID-based Industrial IoT module to enhance the efficiency and automation of object sorting stations. By leveraging RFID technology for wireless object identification, tracking, and communication, this module implements an intelligent object sorting station. Node-RED is employed to manage hardware devices, APIs, and online services, enabling real-time tracking and categorization of items based on RFID tags, thus improving sorting efficiency.

---

## Table of Contents

1. [Introduction](#introduction)
2. [Literature Review](#literature-review)
3. [Methodology](#methodology)
4. [Implementation](#implementation)
5. [Results](#results)
6. [Discussion](#discussion)
7. [Conclusion](#conclusion)

---

## Introduction

Integrating RFID technology into sorting systems represents a significant step in advancing automation and efficiency. This project focuses on developing a PLC sorting station that utilizes RFID to identify and categorize objects based on RFID tags. The sorting process is enhanced by implementing an Industrial IoT module, streamlining operations, and ensuring precise and efficient handling of various objects.

---

## Literature Review

Previous research has demonstrated the potential of RFID technology in logistics and manufacturing settings. However, gaps remain in integrating IoT capabilities to improve object tracking and sorting. This project addresses these gaps by designing an RFID-based Industrial IoT module integrated with Node-RED for real-time monitoring and control.

---

## Methodology

### Tech Stack

- **Siemens S7-1500 PLC**: Central control unit for sorting operations.
- **ESP32 Module**: Handles communication between the RFID reader and PLC.
- **Node-RED**: Provides a visual programming interface for hardware and data flow management.

### System Components

- **Actuators**: Two double-acting solenoid valves for controlling sorting mechanisms.
- **Sensors**: Five sensors for detecting object presence and positioning.
- **Conveyors**: Four conveyor modules transport objects through the sorting process.

### Process Overview

1. The RFID reader collects data from each object’s RFID tag.
2. The data is processed by the ESP32 module.
3. Signals are sent from the ESP32 to the PLC to activate the appropriate solenoid valve for sorting.
4. The Node-RED dashboard displays sorting data and object specifications in real-time.

---

## Implementation

The implementation involved assembling the sorting station, integrating RFID technology, and programming the PLC. A Node-RED dashboard was created to provide real-time updates on the sorting process. The system was tested for object identification accuracy and sorting efficiency, with performance optimizations made where necessary.

---

## Results

The sorting station accurately read RFID tags and sorted objects according to predefined specifications. Real-time data was displayed on the Node-RED dashboard, allowing efficient monitoring and management of the sorting operations.

---

## Discussion

The results demonstrate that the RFID-based Industrial IoT module improves sorting efficiency. Node-RED’s integration enhances system flexibility, making updates and modifications easier. Future developments could explore further automation features and expand the system to handle a wider range of objects.

---

## Conclusion

The project successfully developed an RFID-based PLC sorting station integrated with an Industrial IoT module. The system improved sorting efficiency by providing real-time tracking and control via Node-RED. These findings contribute to advancements in automated sorting systems in industrial environments.
