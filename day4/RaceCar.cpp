#include "include/Race.h"

void RaceCar::setSpeed(int mph)
{
    const int MAX_SPEED = 200;
    if(isIgnitionOn){
        if (mph <= MAX_SPEED){
            speed = mph;
        }else{
            speed = MAX_SPEED;
        }
    }else{
        cout << "Can't set speed - ignition is off!" << endl;
    }
}

// int main()
// {
//     Car aCar;
//     RaceCar aRaceCar;
//     aCar.turnIgnitionOn();
//     aCar.setSpeed(80);
//     cout << "Car at 80 mph: ";
//     aCar.showCar();
//     aRaceCar.turnIgnitionOn();
//     aRaceCar.setSpeed(80);
//     cout << "Race car at 80 mph: ";
//     aRaceCar.showCar();
//     return 0;
// }