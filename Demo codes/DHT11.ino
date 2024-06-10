#include "DHT.h"

#define DHTPIN15

#define DHTTYPE 11//declaring dht type

DHT dht(DHTPIN, DHTTYPE) // declaring object for dht class

void setup()
{
    Serial.begin(115200);

    dht.begin();
}

void loop()
{
    float h = dht.ReadHumidity();

    float t = dht.ReadTemperature();

    Serial.print("Humidity:");
    Serial.print(h);
    Serial.print("Temp.:");
    Serial.print(t);
    delay(1000);
}