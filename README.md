Arduino Nano Setup
==================


1. Download the Arduino IDE [here](http://arduino.cc/en/Main/Software).
2. Download the CHP341 USB to Serial driver (you may need to restart after installing):
    - [Mac](https://github.com/byu-mechatronics/nano-setup/blob/master/drivers/CH341SER_MAC.ZIP)
    - [Windows](https://github.com/byu-mechatronics/nano-setup/blob/master/drivers/CH341SER.EXE)
    - Alternatively, get them from the Chinese distributer:
      - [Mac](http://www.wch.cn/downloads.php?name=pro&proid=178) or [Windows](http://www.wch.cn/downloads.php?name=pro&proid=65).
3. Open your Arduino IDE, change the board type to `Arduino Nano w/ ATmega328` and connect to the correct serial port, as seen below:
  ![Board Type](https://github.com/byu-mechatronics/nano-setup/blob/master/support/board-type.png)
  ![Serial Port](https://github.com/byu-mechatronics/nano-setup/blob/master/support/serial-port.png)


      void setup() {
        // setup pin outputs and inputs here
      }
    
      ...
    
      void loop() {
        // code that always runs in a loop here
      }
