#include "include/convert.h"

void Convertible::putTopUp(){
    isTopUp = true;
}
void Convertible::putTopDown(){
    isTopUp = false;
}
void Convertible::showCar(){
    Car::showCar();
    if(isTopUp)
    cout << "Top is up." << endl;
    else
    cout << "Top is down." << endl;
}

// int main(){
//     Convertible myCar;
//     myCar.turnIgnitionOn();
//     myCar.setSpeed(35);
//     myCar.putTopDown();
//     myCar.showCar();
//     myCar.setSpeed(70);
//     myCar.showCar();
//     myCar.putTopUp();
//     myCar.turnIgnitionOff();
//     myCar.showCar();
//     return 0;
// }
