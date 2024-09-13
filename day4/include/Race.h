#include "Car.h"
using namespace std;
class RaceCar : virtual public Car
{
    public:
        void setSpeed(int mph);
};