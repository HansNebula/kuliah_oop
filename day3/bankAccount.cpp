#include <iostream>
#include <iomanip>

class BankAccount {
private:
    int nomorAkun;
    double saldoAkun;

    static double tingkatBungaTahunan;

public:
    void enterAccountData() {
        std::cout << "Masukkan nomor akun: ";
        std::cin >> nomorAkun;

        do {
            std::cout << "Masukkan saldo (tidak boleh negatif): ";
            std::cin >> saldoAkun;
            if (saldoAkun < 0) {
                std::cout << "Saldo tidak valid. Silakan masukkan lagi." << std::endl;
            }
        } while (saldoAkun < 0);
    }

    void computeInterest(int tahun) const {
        std::cout << "Akun: " << nomorAkun << std::endl;
        double saldo = saldoAkun;
        for (int i = 1; i <= tahun; ++i) {
            saldo += saldo * tingkatBungaTahunan;
            std::cout << "Tahun " << i << ": " << std::fixed << std::setprecision(2) << saldo << std::endl;
        }
    }

    void displayAccount() const {
        std::cout << "Nomor Akun: " << nomorAkun << std::endl;
        std::cout << "Saldo Akun: " << std::fixed << std::setprecision(2) << saldoAkun << std::endl;
    }
};

double BankAccount::tingkatBungaTahunan = 0.03;

int main() {
    const int MAX_ACCOUNTS = 10;
    BankAccount accounts[MAX_ACCOUNTS];
    int jumlahAkun = 0;

    while (jumlahAkun < MAX_ACCOUNTS) {
        std::cout << "Masukkan data untuk akun " << (jumlahAkun + 1) << std::endl;
        accounts[jumlahAkun].enterAccountData();
        jumlahAkun++;

        if (jumlahAkun < MAX_ACCOUNTS) {
            std::cout << "Apakah Anda ingin menambahkan akun lain? (y/n): ";
            char pilihan;
            std::cin >> pilihan;
            if (pilihan != 'y' && pilihan != 'Y') {
                break;
            }
        }
    }

    int tahun;
    do {
        std::cout << "Masukkan term tahun (1-40): ";
        std::cin >> tahun;
        if (tahun < 1 || tahun > 40) {
            std::cout << "Term tahun tidak valid. Silakan masukkan lagi." << std::endl;
        }
    } while (tahun < 1 || tahun > 40);

    for (int i = 0; i < jumlahAkun; ++i) {
        accounts[i].computeInterest(tahun);
    }

    return 0;
}
