#include "WeatherData.h"

WeatherData::WeatherData()
{

}

WeatherData::~WeatherData()
{

}
void WeatherData::registerObserver(Observer* value)
{
    observers.push_back(value);
}
// todo: find observer number and remove this.
void WeatherData::removeObserver(Observer* value)
{
    observers.remove(value);
}
void WeatherData::notifyObserver()
{
    std::list<Observer*>::iterator i = observers.begin();
    for (i; i != observers.end(); ++i)
    {
        Observer* o = *i;
        o->update(temperature,humidity,pressure);

    }
}
void WeatherData::MeasurementsChanged()
{
    notifyObserver();
}

 void WeatherData::setMeasurements(float temp,float hum,float press)
 {
     this->temperature = temp;
     this->humidity = hum;
     this->pressure = press;
     MeasurementsChanged();
 }
