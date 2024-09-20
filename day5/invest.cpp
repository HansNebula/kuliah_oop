#include <iostream>
using namespace std;

// Kelas Investment
class Investment {
protected:
    double initialValue;
    double currentValue;
    double profit;
    double percentProfit;

public:
    // Konstruktor untuk Investment
    Investment(double initial, double current)
        : initialValue(initial), currentValue(current) {
        profit = currentValue - initialValue;
        percentProfit = (profit / initialValue) * 100;
    }

    // Fungsi untuk menampilkan nilai investasi
    void display() const {
        cout << "Nilai Awal: " << initialValue << endl;
        cout << "Nilai Sekarang: " << currentValue << endl;
        cout << "Keuntungan: " << profit << endl;
        cout << "Persentase Keuntungan: " << percentProfit << "%" << endl;
    }
};

// Kelas House
class House {
protected:
    string streetAddress;
    int squareFeet;

public:
    // Konstruktor untuk House
    House(string address, int sqFeet) 
        : streetAddress(address), squareFeet(sqFeet) {}

    // Fungsi untuk menampilkan informasi rumah
    void display() const {
        cout << "Alamat Rumah: " << streetAddress << endl;
        cout << "Luas: " << squareFeet << " kaki persegi" << endl;
    }
};

// Kelas HouseThatIsAnInvestment yang mewarisi dari Investment dan House
class HouseThatIsAnInvestment : public Investment, public House {
public:
    // Konstruktor untuk HouseThatIsAnInvestment
    HouseThatIsAnInvestment(double initial, double current, string address, int sqFeet)
        : Investment(initial, current), House(address, sqFeet) {}

    // Fungsi untuk menampilkan data investasi dan rumah
    void display() const {
        Investment::display();
        House::display();
    }
};

// Fungsi utama
int main() {
    // Membuat objek HouseThatIsAnInvestment
    HouseThatIsAnInvestment houseInvestment(100000.0, 150000.0, "Jalan Mawar No.10", 2000);

    // Menampilkan data
    houseInvestment.display();

    return 0;
}
