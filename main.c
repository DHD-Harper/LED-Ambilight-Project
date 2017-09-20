
#include <stdint.h>

typedef struct Menu{

    uint8_t menuPosition;

    uint8_t curentSection;
    uint8_t currentMode;
    uint8_t currentParameter;

    uint8_t currentParameterValue;

    uint8_t chosedSections[10];

    uint8_t parameter1;
    uint8_t parameter2;
    uint8_t parameter3;
    uint8_t parameter4;

    uint8_t activeLEDDisplayValue;
    uint8_t activeRGBLEDValue;
};

typedef struct LEDSection{

    uint8_t sectionActive;

    uint8_t mode;

    uint8_t parameter1;
    uint8_t parameter2;
    uint8_t parameter3;
    uint8_t parameter4;
};

void main(void)
{

    Menu menu;
    LEDSection ledSection[10];

    while(1)
    {


    }

}
