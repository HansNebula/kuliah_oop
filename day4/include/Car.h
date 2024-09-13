#ifndef CAR_H_
#define CAR_H_
#include <iostream>

using namespace std;

class Car
{
    protected:
        bool isIgnitionOn;
        int speed;
    public:
        void turnIgnitionOn();
        void turnIgnitionOff();
        void setSpeed(int);
        void showCar(); 
};

#endif