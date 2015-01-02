#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include <Observer.h>
#include <DisplayElement.h>
#include <Subject.h>

class CurrentConditionsDisplay : public Observer,public DisplayElement
{
    public:
        CurrentConditionsDisplay(Subject*);
        void update(float,float,float);
        void display();
        virtual ~CurrentConditionsDisplay();
    protected:
    private:
        float temperature;
        float humidity;
        Subject* weatherData;
};

#endif // CURRENTCONDITIONSDISPLAY_H
