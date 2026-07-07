# ESP32 Analog Sensor Threshold Detection using Wokwi

This project demonstrates how to interface an analog sensor (potentiometer) with an ESP32 in the Wokwi simulator. When the sensor value exceeds a predefined threshold, the LED turns ON.

## Components
- ESP32 Dev Board
- Analog Sensor (Potentiometer)
- LED

## Working
- The ESP32 continuously reads the analog value from the potentiometer.
- Rotating the potentiometer changes the input voltage.
- The Serial Monitor displays both the analog value and the calculated voltage in real time.
- When the voltage exceeds the predefined threshold, the LED turns ON.
- When the voltage drops below the threshold, the LED turns OFF.
  
## Files
- `sketch.ino`
- `diagram.json`

## Simulation
https://wokwi.com/projects/468684412836313089
