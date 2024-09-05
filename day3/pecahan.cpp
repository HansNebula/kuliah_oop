#include <iostream>
#include <numeric> 

class Pecahan {
    private:
        int angkaBesar;
        int pembilang;
        int penyebut;

    public:
        static char simbolPembagian;

        Pecahan() : angkaBesar(0), pembilang(0), penyebut(1) {}

        void enterFractionValue() {
            std::cout << "Masukkan bagian angka besar: ";
            std::cin >> angkaBesar;

            std::cout << "Masukkan pembilang: ";
            std::cin >> pembilang;

            do {
                std::cout << "Masukkan penyebut (tidak boleh 0): ";
                std::cin >> penyebut;
                if (penyebut == 0) {
                    std::cout << "Penyebut tidak valid. Silakan masukkan lagi." << std::endl;
                }
            } while (penyebut == 0);
        }

        void reduceFraction() {
            int gcd = std::gcd(pembilang, penyebut);
            pembilang /= gcd;
            penyebut /= gcd;

            angkaBesar += pembilang / penyebut;
            pembilang %= penyebut;
        }

        void displayFraction() const {
            if (angkaBesar != 0) {
                std::cout << angkaBesar << " ";
            }
            if (pembilang != 0) {
                std::cout << pembilang << simbolPembagian << penyebut;
            }
            if (angkaBesar == 0 && pembilang == 0) {
                std::cout << "0";
            }
            std::cout << std::endl;
        }

        void kosongkan() {
            angkaBesar = 0;
            pembilang = 0;
            penyebut = 1;
        }
};

char Pecahan::simbolPembagian = '/';

int main() {
    Pecahan pecahan;

    // Input nilai pecahan dari pengguna
    pecahan.enterFractionValue();

    // Tampilkan pecahan asli
    std::cout << "Pecahan asli: ";
    pecahan.displayFraction();

    // Reduksi pecahan
    pecahan.reduceFraction();

    // Tampilkan pecahan yang sudah direduksi
    std::cout << "Pecahan setelah direduksi: ";
    pecahan.displayFraction();

    return 0;
}
