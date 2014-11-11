Arduino Nano Setup
==================


1. Download the Arduino IDE [here](http://arduino.cc/en/Main/Software).
2. Download the CHP341 USB to Serial driver (you may need to restart after installing):
    - [Mac](https://github.com/byu-mechatronics/nano-setup/blob/master/drivers/CH341SER_MAC.ZIP)
    - [Windows](https://github.com/byu-mechatronics/nano-setup/blob/master/drivers/CH341SER.EXE)
    - Alternatively, get them from the Chinese distributer:
      - [Mac](http://www.wch.cn/downloads.php?name=pro&proid=178) (**Yosemite: See below!**) or [Windows](http://www.wch.cn/downloads.php?name=pro&proid=65).
3. Open your Arduino IDE, change the board type to `Arduino Nano w/ ATmega328` and connect to the correct serial port, as seen below:
    
  ![Board Type](https://github.com/byu-mechatronics/nano-setup/blob/master/support/board-type.png)
    

  ![Serial Port](https://github.com/byu-mechatronics/nano-setup/blob/master/support/serial-port.png)
  
  **Windows Users:** The serial port will be something like `COM3` or `COM4` (the COM stands for 'communications').
  
  **Note:** Make sure to plug in your board, otherwise the serial port will not show up. Also, if it still doesn't show up try restarting your computer.

4. After opening the Arduino IDE, make sure to add the following two functions to your code, as both are required for the Arduino language:


        void setup() {
          // setup pin outputs and inputs here
        }
    
        void loop() {
          // code that always runs in a loop here (like your main() function)
        }

5. Look at some of the example code in this repo to see how to get started. Try downloading one of the files to your computer, and then to your Arduino Nano.

---------------------------------------------------------------------------

### Mac OS X 10.10 (Yosemite) CHP341 Update ###

With the release of Mac OS X Yosemite, the old CHP341 driver breaks. This has something to do with the driver signing policies that need to fixed by the CHP341 creators. The official temporary fix for this while WCH updates their software is the following:

1. Reinstall the old CHP341 driver, restart machine (even if it was already installed)
2. Open your terminal and run the follow command:

        sudo nvram boot-args="debug=0x146 kext-dev-mode=1"
3. Enter your password when prompted (because of the `sudo` command) and then restart your computer.

Note that this is entering developer mode for this device and is only a temporary fix. To restore your Mac to before (AKA, to exit developer mode), run the following in the terminal:

        sudo nvram -d boot-args

---------------------------------------------------------------------------

### Nano Hardware Example ###

Both the [led_crawler](https://github.com/byu-mechatronics/nano-setup/tree/master/led_crawler) and the [binary_counter](https://github.com/byu-mechatronics/nano-setup/tree/master/binary_counter) example projects require a hardware setup as follows:

![Nano Test Layout](https://github.com/byu-mechatronics/nano-setup/blob/master/support/nano_test.png)

---------------------------------------------------------------------------

### Other Resources ###

- [Arduino Language Reference](http://arduino.cc/en/Reference/HomePage)
- [Arduino Playground](http://playground.arduino.cc/) - examples of code and interfacing with Hardware
- [Fritzing](http://fritzing.org/) - used to make clean wiring diagrams
