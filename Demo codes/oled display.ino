#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//declaring pixels
#define SCREEN_WIDTH 128//WIDTH
#define SCREEN_HEIGHT 64//HEIGHT

//Declaration for an ssd1306 display connected to i2c(sda,scl pins)

Adafruit_SSD1306 display(SCREEEN_WIDTH, SCREEN_HEIGHT, &Wire);

void setup()
{
    Serial.begin(115200);

    if(!display.begin(SSD1306_SWITCHCAPVCC, 0*36)){
        Serial.println("SSD1306 allocation failed");
        for(;;);//if the communication is not established between the devices this will work.

    }
    delay(2000);
    display.clearDisplay();

    display.setTestSize(1);
    display.setTextColor(White);
    display.setSensor(0,10);
    //Display static text
    display.println("Hello, world!");
    display.display();
}