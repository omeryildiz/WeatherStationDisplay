#include "AnotherDisplay.h"
#include<iostream>

int AnotherDisplay::i = 0;

AnotherDisplay::AnotherDisplay(Subject* value)
{
    this->weatherData = value;
    weatherData->registerObserver(this);
}

AnotherDisplay::~AnotherDisplay()
{
    //dtor
}

void AnotherDisplay::unregister()
{
    weatherData->removeObserver(this);

}
void AnotherDisplay::registerDisplay()
{
    weatherData->registerObserver(this);
}
void AnotherDisplay::update(float temp,float hum,float press)
{


    this->temperature += temp;
    this->humidity = hum;
    this->pressure = press;
    display();
}
void AnotherDisplay::display()
{
    i++;
    std::cout << "___Baska bir display____" << std::endl
    << " sicaklik : " << temperature/i << " " << i
    << " nem : " << humidity
    << " basinc : " << pressure << std::endl << std::endl;
}
