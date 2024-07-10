#include "mbed.h"

#include "VL53L0X.h"

I2C i2c(PB_9,PB_8);
VL53L0X sensor(&i2c);
Serial      usb(USBTX, USBRX, 9600);


int main(void) {

sensor.init();
sensor.setModeContinuous();
sensor.startContinuous();
while(1){
printf("Distance: %d mm\r\n", sensor.getRangeMillimeters());
wait(0.1);
}
  }
