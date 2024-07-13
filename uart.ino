#include "HardwareSerial.h"

HardwareSerial serial0(0);
HardwareSerial serial1(1);
HardwareSerial serial2(2);

void setup() {
  // Note that for serial1, we don't used the default pins
  // which use the alternate function to connnect to
  // the flash chip (see schematic). We can use any GPIO pins
  // (such as 25, 26) that are not used for other functions.
    serial0.begin(115200); // defaul rx 2 tx 1
    serial1.begin(115200, SERIAL_8N1, 25, 26); // default rx 9 tx 10
    serial2.begin(115200, SERIAL_8N1, 16, 17); // default rx 16 tx 17
}

void loop() {
    serial0.print("hello\n");
    serial1.print("1");
    serial2.print("2");
    delay(5);
}


