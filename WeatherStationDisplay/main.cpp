#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "AnotherDisplay.h"

using namespace std;

int main()
{
    WeatherData* wd = new WeatherData();
    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(wd);
    AnotherDisplay* anotherDisplay = new AnotherDisplay(wd);

    wd->setMeasurements(80,65,22);
    wd->setMeasurements(10,35,22);
    anotherDisplay->unregister();
    wd->setMeasurements(15,40,28);
    anotherDisplay->registerDisplay();
    wd->setMeasurements(15,5,30);
    return 0;
}
