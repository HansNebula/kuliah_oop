#include <iostream>
#include <cstdlib> // untuk fungsi rand() dan srand()
#include <ctime>   // untuk fungsi time()
using namespace std;

// Kelas dasar Car
class Car {
protected:
    int carID;
    double milesTraveled;
    double speed;

public:
    // Konstruktor
    Car() : carID(0), milesTraveled(0), speed(0) {}

    // Fungsi untuk menetapkan ID mobil
    void setCarID(int id) {
        carID = id;
    }

    // Fungsi untuk menyalakan mobil (menginisialisasi milesTraveled ke 0)
    void turnIgnitionOn() {
        milesTraveled = 0;
    }

    // Fungsi untuk meningkatkan jarak tempuh berdasarkan kecepatan saat ini
    void increaseMiles() {
        milesTraveled += speed;
    }

    // Fungsi untuk menetapkan kecepatan
    void setSpeed(double s) {
        speed = s;
    }

    // Fungsi untuk mendapatkan jarak tempuh
    double getMilesTraveled() const {
        return milesTraveled;
    }

    // Fungsi untuk menampilkan data mobil
    void showCar() const {
        cout << "Car ID: " << carID << ", Miles Traveled: " << milesTraveled << ", Speed: " << speed << " mph" << endl;
    }
};

// Kelas turunan RaceCar
class RaceCar : public Car {
public:
    // Fungsi untuk menampilkan data RaceCar
    void showCar() const {
        cout << "RaceCar ID: " << carID << ", Miles Traveled: " << milesTraveled << ", Speed: " << speed << " mph" << endl;
    }
};

// Fungsi utama
int main() {
    srand(time(0));  // Inisialisasi random number generator

    const double raceDistance = 500.0;  // Jarak balapan
    Car car1;
    RaceCar raceCar1;

    // Menetapkan ID dan menyalakan mobil
    car1.setCarID(1);
    raceCar1.setCarID(2);
    car1.turnIgnitionOn();
    raceCar1.turnIgnitionOn();

    // Balapan
    while (car1.getMilesTraveled() < raceDistance && raceCar1.getMilesTraveled() < raceDistance) {
        // Random kecepatan untuk masing-masing mobil
        double randomSpeedCar1 = rand() % 200;
        double randomSpeedRaceCar1 = rand() % 200;

        car1.setSpeed(randomSpeedCar1);
        raceCar1.setSpeed(randomSpeedRaceCar1);

        // Meningkatkan jarak tempuh
        car1.increaseMiles();
        raceCar1.increaseMiles();

        // Menampilkan status masing-masing mobil
        car1.showCar();
        raceCar1.showCar();

        cout << "--------------------------------------------" << endl;
    }

    // Menentukan pemenang
    if (car1.getMilesTraveled() >= raceDistance) {
        cout << "Car 1 wins!" << endl;
    } else {
        cout << "RaceCar 1 wins!" << endl;
    }

    return 0;
}
