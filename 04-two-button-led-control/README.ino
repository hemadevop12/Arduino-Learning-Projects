# Two Button LED ON/OFF Control using Arduino

This project controls an LED using two push buttons with an Arduino UNO.

- Button 1 turns the LED ON.
- Button 2 turns the LED OFF.
- The LED remains in its previous state until the other button is pressed.

## Components Used

1. Arduino UNO
2. LED
3. Two Push Buttons
4. Resistors
5. Breadboard
6. Jumper Wires

## Working Principle

Two push buttons are connected to separate digital input pins of the Arduino.

- Button 1 is connected to digital pin 4.
- Button 2 is connected to digital pin 12.
- LED is connected to digital pin 2.
- Pull-down resistors are used with the push buttons to prevent floating input values.

When Button 1 is pressed, pin 4 reads HIGH and the LED turns ON.

When Button 1 is released, the LED remains ON.

When Button 2 is pressed, pin 12 reads HIGH and the LED turns OFF.

The LED remains OFF until Button 1 is pressed again.

## Concepts Learned

- Arduino digital input and output
- Push button interfacing
- Breadboard connections
- Pull-down resistors
- `digitalRead()`
- `digitalWrite()`
- `if` conditions
- Maintaining the previous LED state
- Debugging using Serial Monitor
