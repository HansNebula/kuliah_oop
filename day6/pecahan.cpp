#include <iostream>
#include <numeric>
using namespace std;

class Pecahan {
    private:
        int pembilang;
        int penyebut;

    public:
        Pecahan() : pembilang(0), penyebut(1) {}
        Pecahan(int p, int q) : pembilang(p), penyebut(q) { reduceFraction(); }

        // Fungsi overload operator aritmatika
        Pecahan operator+(const Pecahan& other) const {
            int newPembilang = pembilang * other.penyebut + other.pembilang * penyebut;
            int newPenyebut = penyebut * other.penyebut;
            return Pecahan(newPembilang, newPenyebut);
        }

        Pecahan operator-(const Pecahan& other) const {
            int newPembilang = pembilang * other.penyebut - other.pembilang * penyebut;
            int newPenyebut = penyebut * other.penyebut;
            return Pecahan(newPembilang, newPenyebut);
        }

        Pecahan operator*(const Pecahan& other) const {
            int newPembilang = pembilang * other.pembilang;
            int newPenyebut = penyebut * other.penyebut;
            return Pecahan(newPembilang, newPenyebut);
        }

        Pecahan operator/(const Pecahan& other) const {
            int newPembilang = pembilang * other.penyebut;
            int newPenyebut = penyebut * other.pembilang;
            return Pecahan(newPembilang, newPenyebut);
        }

        // Fungsi overload operator perbandingan
        bool operator==(const Pecahan& other) const {
            return pembilang * other.penyebut == penyebut * other.pembilang;
        }

        bool operator>(const Pecahan& other) const {
            return pembilang * other.penyebut > penyebut * other.pembilang;
        }

        bool operator<(const Pecahan& other) const {
            return pembilang * other.penyebut < penyebut * other.pembilang;
        }

        // Fungsi untuk mereduksi pecahan
        void reduceFraction() {
            int gcd = std::gcd(pembilang, penyebut);
            pembilang /= gcd;
            penyebut /= gcd;
        }

        // Operator << untuk output
        friend ostream& operator<<(ostream& out, const Pecahan& p) {
            out << p.pembilang << '/' << p.penyebut;
            return out;
        }

        // Operator >> untuk input
        friend istream& operator>>(istream& in, Pecahan& p) {
            cout << "Masukkan pembilang: ";
            in >> p.pembilang;
            do {
                cout << "Masukkan penyebut (tidak boleh 0): ";
                in >> p.penyebut;
            } while (p.penyebut == 0);
            p.reduceFraction();
            return in;
        }
};

int main() {
    Pecahan arr[10] = { Pecahan(1, 10), Pecahan(2, 10), Pecahan(3, 10), Pecahan(4, 10), Pecahan(5, 10),
                        Pecahan(2, 10), Pecahan(3, 10), Pecahan(4, 10), Pecahan(5, 10), Pecahan(1, 10) };

    // Tampilkan pecahan yang sudah direduksi
    cout << "Pecahan dalam array: " << endl;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }

    // Minta user memilih operator
    char op;
    cout << "Pilih operator aritmatik (+, -, *, /): ";
    cin >> op;

    // Lakukan operasi aritmatik pada 5 pasang pecahan
    for (int i = 0; i < 5; ++i) {
        Pecahan hasil;
        switch (op) {
            case '+':
                hasil = arr[i] + arr[i + 5];
                break;
            case '-':
                if (arr[i] > arr[i + 5])
                    hasil = arr[i] - arr[i + 5];
                else
                    cout << "Pengurangan menghasilkan hasil negatif. Diabaikan." << endl;
                continue;
            case '*':
                hasil = arr[i] * arr[i + 5];
                break;
            case '/':
                hasil = arr[i] / arr[i + 5];
                break;
            default:
                cout << "Operator tidak valid." << endl;
                return 1;
        }
        cout << arr[i] << " " << op << " " << arr[i + 5] << " = " << hasil << endl;
    }

    return 0;
}
