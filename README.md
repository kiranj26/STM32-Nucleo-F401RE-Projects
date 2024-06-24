# STM32 Nucleo F401RE Peripheral Examples

## Introduction
Welcome to the STM32 Nucleo F401RE Peripheral Examples repository! This repository contains a collection of bare metal examples demonstrating the use of various peripherals on the STM32 Nucleo F401RE microcontroller. Whether you are a beginner or an experienced developer, you'll find useful resources to explore the capabilities of the STM32 platform.

## Getting Started
To get started with the STM32 Nucleo F401RE, you'll need to set up your development environment. Follow the steps below to set up your system:

1. **Install the STM32CubeIDE:**
   - Download and install the [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html) from STMicroelectronics.

2. **Clone the Repository:**
   - Clone this repository to your local machine using the following command:
     ```bash
     git clone https://github.com/kiranj26/STM32-Nucleo-F401RE-Projects.git
     ```

3. **Open an Example:**
   - Open STM32CubeIDE and import an example project from the `examples` directory.

4. **Build and Flash:**
   - Build the example project and flash it to your STM32 Nucleo F401RE board.

## Repository Structure
The repository is organized into the following directories:

- **examples/**: A collection of example directories, each containing source code for different peripherals.
  - `GPIO_Blink/`
    - `main.c`: Source file for the GPIO Blink example.
    - `README.md`: Example description and instructions.
  - `UART_Communication/`
    - `main.c`: Source file for the UART Communication example.
    - `README.md`: Example description and instructions.
  - `SPI_Communication/`
    - `main.c`: Source file for the SPI Communication example.
    - `README.md`: Example description and instructions.
  - `I2C_Communication/`
    - `main.c`: Source file for the I2C Communication example.
    - `README.md`: Example description and instructions.
  - `ADC_Read/`
    - `main.c`: Source file for the ADC Read example.
    - `README.md`: Example description and instructions.
  - `PWM_Output/`
    - `main.c`: Source file for the PWM Output example.
    - `README.md`: Example description and instructions.
  - `TIMERS_Basic/`
    - `main.c`: Source file for the Basic Timers example.
    - `README.md`: Example description and instructions.
  - `EXTI_Interrupt/`
    - `main.c`: Source file for the External Interrupt example.
    - `README.md`: Example description and instructions.
  - `DMA_Transfer/`
    - `main.c`: Source file for the DMA Transfer example.
    - `README.md`: Example description and instructions.
  - `RCC_ClockControl/`
    - `main.c`: Source file for the RCC Clock Control example.
    - `README.md`: Example description and instructions.
  - `WWDG_WindowWatchdog/`
    - `main.c`: Source file for the Window Watchdog example.
    - `README.md`: Example description and instructions.
  - `USART_Communication/`
    - `main.c`: Source file for the USART Communication example.
    - `README.md`: Example description and instructions.

## Bare Metal Approach
All examples in this repository are implemented using a bare metal approach, without relying on the STM32 HAL (Hardware Abstraction Layer) library. This provides a deeper understanding of the microcontroller's hardware and is ideal for learning low-level programming.

## Contributing
We welcome contributions to this repository! If you have an example you'd like to share, please fork the repository and submit a pull request. For major changes, please open an issue first to discuss what you would like to change.

## License
This repository is licensed under the MIT License. See the `LICENSE` file for more information.

## Acknowledgements
This repository is inspired by the Raspberry Pi Pico RP2040 Projects repository. Special thanks to the community for their contributions and support.

---

Happy coding!

---

**Author:** Kiran Jojare
**GitHub:** [kiranj26](https://github.com/kiranj26)
