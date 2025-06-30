## 🤖 Pick-and-Place Robotic Arm

An industrial-grade robotic manipulator prototype designed for automated object handling using Arduino, servomotors, and ultrasonic sensing — fully modeled in Fusion 360 and tested via real-world hardware simulation.

---

## 🧠 Overview

This project focuses on designing and prototyping a **Pick-and-Place Robotic Arm** capable of detecting, gripping, and relocating objects automatically. Developed as part of an industrial automation study, the system demonstrates synchronized movements, intelligent object handling, and optimized control using Arduino and servos.

> 🔧 Le bras robotique a été conçu et assemblé dans **Fusion 360**, puis simulé et testé à l'aide d'un **Arduino Uno**, de **6 servomoteurs** et d'une détection ultrasonique (HC-SR04).

📸 **Preview:** 3D model, organigram, hardware prototype (media/realmodel.jpg)
---

## ✨ Features

- 🦾 5-axis articulated robotic arm with precision movement
- 🧲 Custom gripper with optional pressure sensing
- 🧠 Synchronization between object detection and grip action
- 🛠️ Designed in Fusion 360 for physical reliability
- 🧪 Real-world hardware simulation and testing
- 🚀 Ideal for automating repetitive industrial tasks

---

## 📐 Mechanical Design

Designed in **Fusion 360**, the robot consists of:

- **Stable Base & Joints** – Designed for balance and mobility under load
- **Rotational Axes** – Integrated supports for servomotors
- **Custom Gripper (Claw)** – Designed to securely hold objects
- **Sensor Mounting** – Space allocated for ultrasonic and (optional) pressure/position sensors

> Full 3D assembly validated with motion simulation and collision testing.

---

## 🔌 Electronics

### Components

| Component             | Description                               |
|----------------------|-------------------------------------------|
| Arduino Uno          | Microcontroller unit                      |
| 6× Servomotors       | Joint actuation and gripper control       |
| HC-SR04              | Ultrasonic sensor for object detection     |
| Breadboard & wires   | Circuit prototyping                       |
| Power Supply         | 5V regulated (as per servo requirements)  |

### Sensors Used

- **HC-SR04 (Ultrasonic):** Object detection before grip
- **Pressure Sensor (Optional):** To control grip force
- **Position Sensor (Planned):** To ensure precise pathing

---

## 🧪 Testing & Simulation

- ✅ Initial simulation performed in **TinkerCAD** and **Fusion 360**
- ✅ Gripper operation tested via programmed servo sequences
- ✅ Final test sequence:
  1. Detect object within 5 cm
  2. Rotate and align joints
  3. Grip, lift, and place the object
  4. Return to initial position

---

## 🖥️ Software

### Tools Used

- [Arduino IDE](https://www.arduino.cc/en/software) — for microcontroller code
- [Fusion 360](https://www.autodesk.com/products/fusion-360/) — for CAD modeling
- [TinkerCAD](https://www.tinkercad.com/) — for simulation testing

### Code Structure

```bash
pick-and-place-robotic-arm/
├── firmware/
│   ├── arm_controller.ino         # Arduino sketch for servo control and sensor logic
│   └── organigram.jpg             # System architecture diagram (duplicate in media?)
├── design/
│   ├── projet+robot+pick+and+place(VF2).stl      # Full robot 3D model (STL)
│   └── projet+robot+pick+and+place(VF2) v3.f3d   # Fusion 360 project file
├── media/
│   ├── pic1.jpg                   # Project photo
│   ├── pic2.png                   # Project image
│   ├── organigram.jpg             # System architecture diagram (duplicate in firmware?)
│   ├── maquette.jpg               # Hardware prototype image
│   └── modelisation.jpg           # 3D model render
├── pieces/                        # All individual robotic arm parts (one file per piece)
│   ├── fero+2.stl
│   ├── Tappo+Pieno+x4.stl
│   ├── Aggancio+Rotazione+Polso+x1.stl
│   ├── Gripper+base.stl
│   ├── Gripper+2.stl
│   ├── Gripper+1.stl
│   ├── Braccetto+Pinza+x4.stl
│   ├── Ghiera+Motore+Pinza+x1.stl
│   ├── Ghiera+Libera+Pinza+x1.stl
│   ├── Composant86.stl
│   ├── Composant85.stl
│   ├── Base+(rotante).stl
│   ├── Pezzo+piccolo+alluminio.stl
│   ├── fERO (1).stl
│   ├── Aggancio+Rotazione+polso+lato+motore+x1.stl
│   ├── Adattatore+Motore+Rotazione+Polso+x1.stl
│   └── Base+Fissa+x1.stl
└── README.md
```

---

## 🚀 How to Run

### 1. Hardware Setup

- Connect all 6 servomotors to Arduino PWM pins
- Connect HC-SR04 to digital pins (Trig, Echo)
- Ensure adequate power for servos (5V external recommended)

### 2. Upload the Code

- Open `firmware/arm_controller.ino` in Arduino IDE
- Upload to Arduino Uno

### 3. Start Simulation

- Place an object in front of the ultrasonic sensor
- Arm should detect, grip, rotate, place, and reset

---

## 📸 Media

- 🧩 **3D Model:** `media/modelisation.jpg`
- 🔁 **System Organigram:** `media/organigram.png`
- 🔌 **Electronic Mockup:** `media/maquette.jpg`
- 🎥 **Demo/Test Video:** `media/demo-video.gif`

---

## 🙌 Contributions

Contributions are welcome!

```bash
git clone https://github.com/your-username/pick-and-place-robotic-arm
git checkout -b feature/Improvement
git commit -m "Improve motion path"
git push origin feature/Improvement
```

Then submit a pull request.

---

## 📜 License

Distributed under the MIT License. See [`LICENSE`](LICENSE) for more information.

---

## 📬 Contact

**Saifeddine Mosrati**  
📧 mosratisayf20@gmail.com
🔗 GitHub: [github.com/sayf20/pick-and-place-robotic-arm](https://github.com/sayf20/pick-and-place-robotic-arm)

---

## 🙏 Acknowledgements

- [Arduino](https://www.arduino.cc/)
- [Fusion 360](https://www.autodesk.com/products/fusion-360/)
- [TinkerCAD](https://www.tinkercad.com/)
- Servo tutorials by [DroneBot Workshop](https://dronebotworkshop.com/)
