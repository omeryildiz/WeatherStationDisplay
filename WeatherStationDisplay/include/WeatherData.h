#include "Subject.h"
#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <list>



class WeatherData:public Subject
{
    public:
        WeatherData();
        virtual ~WeatherData();
         void registerObserver(Observer *);
         void removeObserver(Observer *);
         void notifyObserver();

        void getTemperature();
        void getHumidty();
        void getPressure();
        void MeasurementsChanged();
        void setMeasurements(float,float,float);
    protected:
    private:
        float temperature;
        float humidity;
        float pressure;
        std::list<Observer*> observers;
};

#endif // WEATHERDATA_H
