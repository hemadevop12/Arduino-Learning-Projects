# Potentiometer Controlled LED Brightness using Arduino

This project controls the brightness of an LED using a potentiometer and an Arduino UNO.

Rotating the potentiometer changes the analog input value. The Arduino reads this value and converts it into a PWM value to control the LED brightness.

## Components Used

- Arduino UNO
- Breadboard
- Potentiometer
- LED
- 220Ω Resistor
- Jumper Wires

## Connections

### Potentiometer
- One outer pin → 5V
- Other outer pin → GND
- Middle pin (Wiper) → A0

### LED
- Arduino PWM Pin 3 → 220Ω Resistor → LED Anode (+)
- LED Cathode (-) → GND

## Working Principle

The potentiometer produces a variable voltage between 0V and 5V.

The Arduino reads this voltage through analog pin A0 using analogRead().

analogRead() gives a value between:

0 - 1023

The PWM output used by analogWrite() accepts values between:

0 - 255

Therefore, the map() function converts the potentiometer reading from the 0–1023 range to the 0–255 range.

The converted value is then passed to analogWrite().

PWM rapidly switches the output pin ON and OFF. Changing the duty cycle changes the perceived brightness of the LED.

For example:

- PWM 0 → LED OFF
- PWM 64 → ~25% duty cycle
- PWM 128 → ~50% duty cycle
- PWM 191 → ~75% duty cycle
- PWM 255 → LED fully ON
