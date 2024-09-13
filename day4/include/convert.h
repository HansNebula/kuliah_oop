#include "Car.h"


class Convertible: virtual public Car
{
    private:
        bool isTopUp;
    public:
        void putTopUp();
        void putTopDown();
        void showCar();
};