// #include "include/Car.h"
#include "include/Race.h"
#include "include/convert.h"

class ConvertibleRaceCar : public Convertible, public RaceCar
{
};

int main(){
    ConvertibleRaceCar aCar;
    aCar.turnIgnitionOn();
    aCar.setSpeed(30);
    cout << "Car at 30 mph: ";
    aCar.showCar();
    aCar.putTopDown();
    aCar.setSpeed(80);
    cout << "Car at 80 mph with top down: ";
    aCar.showCar();
    aCar.putTopUp();
    aCar.setSpeed(210);
    cout << "Car at 210 mph with top up: ";
    aCar.showCar();
    return 0;
}

int umur_dani = 16;
float tinggi_dani = 163.7f

int umur_danu = umur_dani + 2;
int umur_dina = umur_danu - 4;

float tinggi_rina = tinggi_dani * 0.8f;
float tinggi_rani = tinggi_rina / 2.1f;

if (nilai >= 60) {
    std::cout << "Lulus";
} else {
    std::cout << "Tidak Lulus";
}

int banyak_ikan = 9;

for(int i=0; i < banyak_ikan; i++){
    std::cout << i << std::endl;
}