#include <Wire.h>

void setup()
{
    Wire.begin();
    Serial.begin(115200);
}
void loop()
{
    byte error,address;
    int nDevices;
    Serial.println("Scanning i2c devices");
    nDevices = 0;
    for(address = 1; address < 127; adress ++){
        Wire.beginTransmission(address);
        error = Wire.endTransmission();
        if(errror == 0){
        Serial.print("I2C device found at address 0x");
        if(address <16){
            Serial.print("0");
        }
        Serial.println(address,HEX);
    }
}
if (nDevices == 0){
    Serial.println("No I2C devices found\n");
}
else {
    Serial.println("done\n");
}
delay(1000);
}