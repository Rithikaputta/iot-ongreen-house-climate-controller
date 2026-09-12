# 🌱 IoT Greenhouse Climate Controller

## 📌 Project Overview

The **IoT Greenhouse Climate Controller** is a smart agriculture and automation system designed to monitor and control the environmental conditions inside a greenhouse.

The system uses sensors to continuously monitor **temperature, humidity, soil moisture, light intensity, and soil pH**. Based on predefined threshold values, the controller automatically operates devices such as a **water pump, cooling fan, and lighting system** using relay modules.

The project reduces manual monitoring, improves resource management, and helps maintain suitable environmental conditions for healthy plant growth.

---

## 🎯 Objectives

* Monitor greenhouse environmental conditions continuously.
* Measure temperature and humidity.
* Monitor soil moisture levels.
* Monitor light intensity.
* Monitor soil pH conditions.
* Automatically control irrigation.
* Automatically control greenhouse ventilation.
* Generate alerts for abnormal conditions.
* Store sensor readings for future analysis.
* Enable IoT-based monitoring and automation.

---

## ⚙️ Main Components

| Component                | Purpose                              |
| ------------------------ | ------------------------------------ |
| **Arduino / ESP32**      | Main controller                      |
| **DHT11 / DHT22**        | Temperature and humidity measurement |
| **Soil Moisture Sensor** | Measures soil moisture               |
| **LDR**                  | Measures light intensity             |
| **pH Sensor**            | Monitors soil pH                     |
| **Relay Module**         | Controls external devices            |
| **Water Pump**           | Automatic irrigation                 |
| **DC Fan**               | Greenhouse ventilation               |
| **GSM Module (SIM800L)** | SMS alerts                           |
| **LCD Display**          | Displays sensor readings             |

---

## 🔄 Working Principle

The system works through continuous monitoring and automatic decision-making.

1. Sensors collect environmental information from the greenhouse.
2. The **Arduino/ESP32** reads the sensor values.
3. The measured values are compared with predefined threshold values.
4. If the **soil moisture is below the required level**, the water pump is activated automatically.
5. If the **temperature becomes too high**, the cooling fan is activated.
6. The **LDR** monitors the light intensity inside the greenhouse.
7. The **pH sensor** monitors the soil pH condition.
8. The LCD displays the current sensor readings.
9. Abnormal conditions can be communicated through **SMS alerts using the GSM module**.
10. Sensor data can be logged for monitoring and further analysis.

---

## 🏗️ System Architecture

```text
                 🌱 GREENHOUSE
                      │
        ┌─────────────┴─────────────┐
        │           SENSORS          │
        │                            │
        │  • Temperature             │
        │  • Humidity                │
        │  • Soil Moisture           │
        │  • Light Intensity (LDR)   │
        │  • Soil pH                 │
        └─────────────┬─────────────┘
                      │
                      ▼
             ┌─────────────────┐
             │  Arduino / ESP32│
             │                 │
             │ Data Processing │
             │ & Decision Logic│
             └────────┬────────┘
                      │
             ┌────────┴────────┐
             │                 │
             ▼                 ▼
      ┌─────────────┐   ┌──────────────┐
      │ Relay Module│   │ GSM / LCD    │
      └──────┬──────┘   └──────────────┘
             │
       ┌─────┼─────┐
       │     │     │
       ▼     ▼     ▼
     Pump   Fan   Light
```

---

## 💡 Key Features

* 🌡️ Real-time temperature monitoring
* 💧 Automatic irrigation
* 🌱 Soil moisture monitoring
* ☀️ Light intensity monitoring
* 🧪 Soil pH monitoring
* 🌬️ Automatic ventilation
* 📱 SMS alert capability
* 📟 LCD-based monitoring
* 📊 Data logging capability
* 🤖 Automatic environmental control
* 🌐 IoT-based monitoring

---

## 🛠️ Technologies Used

* **Embedded C**
* **Arduino / ESP32**
* **IoT**
* **Sensor Interfacing**
* **Embedded Systems**
* **GSM Communication**
* **Relay Control**
* **Automation**
* **Data Logging**
* **Tinkercad Circuits**

---

## 🔴 Live Simulation

The complete circuit can be viewed and simulated online using **Tinkercad Circuits**.

👉 [🔗 Open Live Tinkercad Simulation](https://www.tinkercad.com/things/dsuAVYW9auU-iot-on-green-house-climate-controller?utm_source=chatgpt.com)

**Platform:** Tinkercad Circuits
**Project:** IoT Greenhouse Climate Controller
**Status:** ✅ Working Simulation

---

## 🖥️ Simulation

The Tinkercad simulation demonstrates the sensor interfacing and automatic control logic of the greenhouse system.

The simulation can be used to observe:

* Sensor data collection
* Temperature and humidity monitoring
* Soil moisture monitoring
* Automatic pump control
* Automatic fan control
* Light monitoring
* LCD output
* Controller decision-making

---

## 📷 Project Images

Add your project images here:

```text
📁 images/
│
├── circuit-diagram.png
├── tinkercad-simulation.png
├── hardware-setup.jpg
└── working-model.jpg
```

Example:

```markdown
## 📷 Project Demo

![Circuit Diagram](images/circuit-diagram.png)

![Tinkercad Simulation](images/tinkercad-simulation.png)

![Hardware Setup](images/hardware-setup.jpg)
```

---

## 🚀 Applications

This project can be used in:

* 🌱 Smart agriculture
* 🏡 Smart gardening
* 🌿 Greenhouse automation
* 🌾 Precision farming
* 🧑‍🌾 Agricultural monitoring
* 🌳 Plant nurseries
* 🔬 Agricultural research
* 🏠 Home-based plant monitoring

---

## 🔮 Future Enhancements

The system can be further improved by adding:

* ☁️ Cloud-based monitoring dashboard
* 📱 Dedicated mobile application
* 🤖 AI-based plant health prediction
* 🌦️ Weather-based automatic control
* 🧠 Machine learning for irrigation optimization
* 📷 Camera-based plant disease detection
* ☀️ Solar-powered operation
* 📈 Advanced data visualization
* 🌐 Remote control through IoT

---

## 📚 Skills Demonstrated

This project demonstrates practical knowledge of:

* **Microcontrollers**
* **Embedded Systems**
* **IoT**
* **Sensor Interfacing**
* **C Programming**
* **Automation**
* **GSM Communication**
* **Relay and Actuator Control**
* **Circuit Simulation**
* **Problem Solving**

---

## 👩‍💻 Author

### **P. Rithika**

**B.Tech – Electronics and Communication Engineering**
**Rajeev Gandhi Memorial College of Engineering and Technology**

---

## ⭐ Project Highlights

> **An IoT-based smart greenhouse system that monitors environmental parameters and automatically controls greenhouse conditions to support efficient and healthy plant growth.**

---

## 📄 License

This project is created for **educational, academic, and learning purposes**.
