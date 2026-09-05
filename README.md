# 🪖 Smart Safety Helmet

An IoT-based **Smart Safety Helmet** designed to improve worker safety through automatic lighting, IR-based detection, and an audible alert system.

## 📌 Project Overview

Workers may need to work in low-light environments and may face different safety conditions during their work. This project develops a smart helmet prototype that combines sensors, an **ESP32 microcontroller**, and electronic components to provide automatic lighting and safety monitoring.

The system uses an **LDR/light sensor** to detect the surrounding light level and automatically controls the helmet headlight. An **IR sensor** is used for detection, and a buzzer provides an audible warning based on the detected condition.

The project was designed and tested using **Wokwi simulation** and developed as a **3D-printed physical prototype**.

The concept can be adapted for various applications such as construction, industrial workplaces, factories, warehouses, mining, road maintenance, electrical work, and other environments where worker safety is important.

---

## 🎯 Objectives

* To develop a smart safety helmet prototype for workers.
* To automatically control a headlight according to surrounding light conditions.
* To use an IR sensor for detection.
* To provide an audible warning using a buzzer.
* To integrate electronic components into a 3D-printed helmet.
* To develop a low-cost and practical worker safety solution.
* To simulate and test the system using Wokwi.
* To demonstrate the working system through a physical prototype.

---

## ⚙️ Main Features

### 💡 Automatic Headlight

The LDR/light sensor continuously detects the surrounding light level.

When the detected light value indicates a dark environment, the ESP32 automatically turns **ON** the helmet headlight.

When sufficient light is available, the headlight remains **OFF**.

### 👁️ IR-Based Detection

An IR sensor is used to detect the required condition near the helmet.

The ESP32 continuously reads the IR sensor and responds according to the detected state.

### 🔊 Safety Alert

The buzzer provides an audible warning based on the IR sensor condition.

This allows the system to provide an immediate alert when the required condition is detected.

### 🪖 3D-Printed Prototype

The electronic components were integrated with a **3D-printed helmet structure** to create a physical working prototype.

The prototype demonstrates how embedded electronics can be integrated into a wearable safety device.

---

## 🌍 Applications

The Smart Safety Helmet can be adapted for different working environments, including:

* 🏗️ Construction sites
* 🏭 Industrial workplaces
* ⚙️ Manufacturing factories
* 📦 Warehouses
* ⛏️ Mining environments
* 🛣️ Road maintenance
* ⚡ Electrical maintenance
* 🔧 Maintenance and repair activities
* 🦺 Other worker safety applications

---

## 🔧 Hardware Components

| Component              | Purpose                                 |
| ---------------------- | --------------------------------------- |
| ESP32 DevKit           | Main microcontroller                    |
| LDR / Light Sensor     | Detects surrounding light               |
| IR Sensor              | Provides detection input                |
| LED / Headlight        | Provides automatic lighting             |
| Buzzer                 | Provides audible warning                |
| Resistors              | Circuit protection and current limiting |
| Battery / Power Supply | Powers the system                       |
| 3D-Printed Helmet      | Physical prototype structure            |

---

## 🔌 ESP32 Pin Configuration

| Component          | ESP32 GPIO |
| ------------------ | ---------- |
| LDR / Light Sensor | GPIO 34    |
| IR Sensor OUT      | GPIO 27    |
| Headlight LED      | GPIO 25    |
| Buzzer             | GPIO 26    |

> These are the pin assignments used in the Wokwi simulation and can be modified according to the final hardware arrangement.

---

## 🔄 System Working

The system operates continuously through the following process:

1. The ESP32 initializes the connected sensors and output devices.
2. The LDR sensor reads the surrounding light level.
3. The ESP32 compares the LDR value with the programmed threshold.
4. Based on the programmed condition, the headlight LED is turned **ON or OFF**.
5. The IR sensor continuously checks its input condition.
6. The ESP32 reads the IR sensor state.
7. Based on the detected IR condition, the buzzer is turned **ON or OFF**.
8. The system continuously repeats these operations.

---

## 🔁 System Flow

```text
                    START
                      │
                      ▼
             ESP32 Initialization
                      │
                      ▼
              Read LDR Sensor
                      │
                ┌─────┴─────┐
                │           │
        Light Value > 1500   ≤ 1500
                │           │
                ▼           ▼
        Headlight ON   Headlight OFF
                │           │
                └─────┬─────┘
                      │
                      ▼
                Read IR Sensor
                      │
                ┌─────┴─────┐
                │           │
             IR HIGH       IR LOW
                │           │
                ▼           ▼
            Buzzer ON    Buzzer OFF
                │           │
                └─────┬─────┘
                      │
                      ▼
                 Repeat Loop
```

---

## 🧩 System Architecture

```text
             ┌──────────────────┐
             │   LDR / Light    │
             │      Sensor      │
             └────────┬─────────┘
                      │
                      ▼
                ┌────────────┐
                │    ESP32   │
                │ Controller │
                └─────┬──────┘
                      │
             ┌────────┴────────┐
             │                 │
             ▼                 ▼
       ┌───────────┐      ┌───────────┐
       │ Headlight │      │  Buzzer   │
       │    LED    │      │  Warning  │
       └───────────┘      └───────────┘
             
             ┌──────────────────┐
             │    IR Sensor     │
             │    Detection     │
             └────────┬─────────┘
                      │
                      ▼
                   ESP32
```
```

## 💻 Source Code

The ESP32 source code used for the Wokwi simulation is available in the `Code` folder.

### Files

* [`sketch.ino`](Code/sketch.ino) — ESP32 program
* [`diagram.json`](Code/diagram.json) — Wokwi circuit configuration

---

## 🧪 Simulation Output

The system was tested using **Wokwi simulation**.

The output demonstrates:

* LDR-based automatic headlight control.
* IR sensor detection.
* Buzzer activation/deactivation.
* ESP32 serial monitor output.

The output images are available in the `Output` folder.

---

## 📷 3D-Printed Prototype

A physical prototype of the Smart Safety Helmet was developed using a **3D-printed helmet structure**.

The prototype photos are available in the `Prototype` folder.

### Prototype Development

The project involved:

1. Designing the helmet structure.
2. 3D printing the helmet components.
3. Integrating the sensors and electronic components.
4. Connecting the components to the ESP32.
5. Testing the complete system.

---

## 🛠️ Technologies Used

* **ESP32**
* **Wokwi**
* **Arduino/C++**
* **LDR / Light Sensor**
* **IR Sensor**
* **LED**
* **Buzzer**
* **3D Printing**
* **Embedded Systems**
* **IoT**

---

## ✅ Advantages

* Automatic lighting based on environmental conditions.
* Provides audible safety warnings.
* Compact and wearable design.
* Low-cost implementation.
* Simple sensor-based operation.
* 3D-printable and customizable.
* Can be adapted for different worker safety applications.
* Easy to extend with additional sensors.

---

## 🚀 Future Improvements

The current prototype can be further enhanced by integrating additional safety features such as:

* Gas detection
* Temperature and humidity monitoring
* Fall detection
* GPS-based location tracking
* Emergency/SOS alert
* Heart-rate monitoring
* Wireless communication
* Mobile application integration
* Real-time safety monitoring

These improvements can transform the prototype into a more comprehensive **smart worker safety system**.

---

## 📊 Project Status

**Project Type:** IoT / Embedded Systems / Smart Safety Wearable

**Controller:** ESP32

**Simulation Platform:** Wokwi

**Prototype:** 3D-Printed Working Prototype

**Status:** ✅ Completed

---

## 📝 Conclusion

The **Smart Safety Helmet** successfully demonstrates the integration of an ESP32, LDR/light sensor, IR sensor, LED headlight, and buzzer into a wearable safety prototype.

The system provides **automatic lighting and sensor-based safety alerts** while demonstrating how embedded and IoT technologies can be integrated into a practical wearable device.

The prototype can be further developed for construction, industrial, manufacturing, mining, road maintenance, electrical work, and other environments where worker safety is important.
