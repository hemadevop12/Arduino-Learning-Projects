# Project 06 - LDR Automatic Night Light

## Objective

To build an automatic night light using an LDR (Photoresistor).

- When it is dark → LED turns ON
- When it is bright → LED turns OFF

## Components Used

- Arduino UNO
- LDR / Photoresistor
- LED
- 10kΩ resistor
- 220Ω resistor
- Breadboard
- Jumper wires

## Circuit Connections

### LDR Voltage Divider

- LDR → 5V
- Other side of LDR → A0
- 10kΩ resistor → between A0 junction and GND

text
5V
 |
LDR
 |
 ●------ A0
 |
10kΩ
 |
GND

### LED

- Arduino Pin 7 → 220Ω resistor → LED
- LED cathode → GND

## Working Principle

The LDR changes its resistance depending on the amount of light.

- Bright light → LDR resistance decreases
- Darkness → LDR resistance increases

The LDR and 10kΩ resistor form a voltage divider.

With this circuit orientation:

- Dark → lower A0 reading
- Bright → higher A0 reading

A threshold value of 343 is used to decide whether the environment is dark or bright.

text
A0 < 343  → Dark   → LED ON
A0 >= 343 → Bright → LED OFF


## Concepts Learned

- LDR / Photoresistor
- Voltage Divider
- Analog Input
- analogRead()
- ADC values (0–1023)
- Threshold values
- if...else conditions
- Serial Monitor
- Sensor-based automatic control
- Basic debugging

## Simulation

This project was built and tested using Tinkercad Circuits.

## Result

The LED automatically turns ON when the light level becomes low and turns OFF when the light level increases.
