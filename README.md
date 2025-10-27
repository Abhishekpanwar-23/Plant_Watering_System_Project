# Automatic Plant Watering System (Arduino)

This project automatically waters plants using a soil moisture sensor and a relay-controlled water pump.

---

## Hardware Used
| Component | Pin/Port |
|----------|----------|
| Soil Moisture Sensor (Analog Out) | A0 |
| Relay Module (Signal) | D7 |
| Relay VCC | 5V |
| Relay GND | GND |
| Pump Power | Through relay COM/NO |
| Arduino Power | USB/5V |

---

## Wiring Guide

### Soil Moisture Sensor
- VCC → 5V
- GND → GND
- AOUT → A0

### Relay Module
- VCC → 5V
- GND → GND
- IN → Digital Pin 7
- COM → Pump Power Input
- NO → Pump Positive Output

Pump negative goes directly to power supply ground.

---

## Calibration
1. Upload code and open Serial Monitor.
2. Insert sensor in **wet soil** — note reading.
3. Insert sensor in **dry soil** — note reading.
4. Set `soilDryThreshold` between those values (default = 700).

---

## How It Works
- Reads moisture sensor value repeatedly.
- If soil is dry (value > threshold), pump runs for 2 seconds.
- Waits to allow water absorption before next cycle.

---

## Safety Notes
- Relay drives high-voltage if AC pump is used — be careful.
- Use separate power for pump if required.
- Keep electronics away from water.

---

## License
 free to use and modify.
