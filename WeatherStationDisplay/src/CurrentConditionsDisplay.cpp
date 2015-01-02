#include "CurrentConditionsDisplay.h"
#include<iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* value)
{
    this->weatherData = value;
    weatherData->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
    //dtor
}
void CurrentConditionsDisplay::update(float temp,float hum,float press)
{
    this->temperature = temp;
    this->humidity = hum;
    display();
}
void CurrentConditionsDisplay::display()
{
    std::cout<<"____Simdiki durum_____" << std::endl <<
    " Sicaklik : " <<temperature <<
    " Nem : " << humidity << std::endl << std::endl;
}
