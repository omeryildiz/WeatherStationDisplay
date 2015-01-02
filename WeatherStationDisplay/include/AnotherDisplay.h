#ifndef ANOTHERDISPLAY_H
#define ANOTHERDISPLAY_H
#include <Observer.h>
#include <DisplayElement.h>
#include <Subject.h>

class AnotherDisplay:public Observer,public DisplayElement
{
    public:
        AnotherDisplay(Subject*);
        void update(float,float,float);
        void unregister();
        void registerDisplay();
        void display();
        virtual ~AnotherDisplay();
    protected:
    private:
        float temperature;
        float humidity;
        float pressure;
        Subject* weatherData;
        static int i;
};
#endif // ANOTHERDISPLAY_H
