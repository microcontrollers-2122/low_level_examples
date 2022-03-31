# Low level starting template for the STM32L476RG

Template tested on the NUCLEO L476RG

## Installation

[GNU ARM Embedded toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm)

On Ubuntu:

```bash
sudo apt upgrade
sudo apt install gcc-arm-none-eabi
sudo apt install make
```

## Building the example

On Ubuntu:

```bash
make
```

or with Windows Powershell using WSL:

```bash
wsl make
```

## Flash to the NUCLEO L476RG

Copy the **.bin** file in the BUILD folder to the NUCLEO drive folder

## More information

https://microcontrollers.netlify.app/interrupts/
