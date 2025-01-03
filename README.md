# Convert a Python Machine Learning Model to Arduino Code (C++)
   
## Introduction

### Motivation

<div id="container" style="display: flex; gap: 20px; width: 100%;">
<div id="left_div" style="flex: 2;">
<b>What?</b>
    This project demonstrates the conversion of Python machine learning (ML) models to Arduino C++ code.  
    We will use some ML models purely as examples; the goal is not to find the best model or achieve minimal error.  

**Why?**
    In certain applications, such as embedded systems, small microcontrollers with limited memory and computing resources are used.  
    The idea is to train a machine learning model in a Python environment and then convert the trained model to C++ for deployment on a microcontroller.  
    In this project, we will use the Arduino Uno as an example, but the approach can be applied to other microcontrollers as well.  

**How?**
    Follow the step-by-step guide below, or go directly to the PyPi package [mltoarduino](https://pypi.org/search/?q=mltoarduino)
  </div>
  <div id="right_div" style="flex: 1; width: 50%; display: flex; align-items: center;">
    <img src="https://bouz1.github.io/fils/MLModelToArduinoCpp/illustration2.png" > 
  </div>
</div>

### Hardware

In this project, the Arduino Uno was used, but you can use other boards like Arduino Nano or Micro, Miga 2560, ESP32...  

Below is a comparison of some Arduino boards:  

| Feature              | Arduino Uno   | Arduino Nano   | Arduino Micro  | Arduino Mega 2560 | ESP32               |
|----------------------|---------------|----------------|----------------|-------------------|---------------------|
| **Microcontroller**  | ATmega328P    | ATmega328P     | ATmega32U4     | ATmega2560        | Tensilica Xtensa LX6 |
| **Operating Voltage** | 5V           | 5V             | 5V             | 5V                | 3.3V               |
| **Input Voltage**    | 7-12V         | 7-12V          | 7-12V          | 7-12V             | 5V via USB or 7-12V |
| **Digital I/O Pins** | 14 (6 PWM)    | 14 (6 PWM)     | 20 (7 PWM)     | 54 (15 PWM)       | 34                 |
| **Analog Input Pins**| 6             | 8              | 12             | 16                | 18                 |
| **Flash Memory**     | 32 KB         | 32 KB          | 32 KB          | 256 KB            | Up to 16 MB        |
| **SRAM**             | 2 KB          | 2 KB           | 2.5 KB         | 8 KB              | 520 KB             |
| **EEPROM**           | 1 KB          | 1 KB           | 1 KB           | 4 KB              | None               |
| **Clock Speed**      | 16 MHz        | 16 MHz         | 16 MHz         | 16 MHz            | 240 MHz (dual-core)|
| **Connectivity**     | UART, I2C, SPI| UART, I2C, SPI | UART, I2C, SPI | UART, I2C, SPI    | Wi-Fi, Bluetooth   |
| **USB Interface**    | USB-B         | Mini USB       | Micro USB      | USB-B             | Micro USB          |
| **Dimensions**       | 68.6 x 53.4 mm| 45 x 18 mm     | 48 x 18 mm     | 101.52 x 53.3 mm  | 51 x 25.5 mm       |
| **Power Consumption**| ~50 mA        | ~50 mA         | ~50 mA         | ~70 mA            | Varies (~80-240 mA)|
| **Special Features** | Simple and robust | Compact      | USB HID support| High I/O count    | Wi-Fi and BLE      |
| **Price Range**      | Low           | Low            | Medium         | Medium            | Medium-High        |

## Organisation of the Project (Links)

- [GitHub Repository of this Project](https://github.com/bouz1/ML-Model-To-Arduino-Cpp)  
- [The Main File as HTML](https://bouz1.github.io/fils/MLModelToArduinoCpp/MLModelToArduinoCpp.html)  
- [The Main File as Notebook](https://github.com/bouz1/ML-Model-To-Arduino-Cpp/blob/main/notebooks/MLModelToArduinoCpp.ipynb)  
- [The Main File as PDF](https://bouz1.github.io/fils/MLModelToArduinoCpp/MLModelToArduinoCpp.pdf)  
- [The PyPi Package](https://pypi.org/project/mltoarduino/)  
- [The PyPi Folder](https://github.com/bouz1/PypiContributions/tree/main/mltoarduino)
