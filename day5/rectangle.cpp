#include <iostream>
using namespace std;

// Kelas dasar Rectangle
class Rectangle {
protected:
    double length;
    double width;
public:
    // Fungsi untuk menetapkan nilai
    void setValues(double l, double w) {
        length = l;
        width = w;
    }

    // Fungsi untuk menampilkan nilai panjang dan lebar
    void display() {
        cout << "Panjang: " << length << ", Lebar: " << width << endl;
    }

    // Fungsi untuk menghitung luas
    double area() {
        return length * width;
    }
};

// Kelas turunan Block
class Block : public Rectangle {
private:
    double height;
public:
    // Fungsi untuk menetapkan nilai tinggi
    void setValues(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Fungsi untuk menampilkan nilai panjang, lebar, dan tinggi
    void display() {
        cout << "Panjang: " << length << ", Lebar: " << width << ", Tinggi: " << height << endl;
    }

    // Fungsi untuk menghitung volume
    double area() {
        return length * width * height;
    }
};

int main() {
    // Demonstrasi Rectangle
    Rectangle rect;
    rect.setValues(5.0, 3.0);
    cout << "Rectangle:" << endl;
    rect.display();
    cout << "Luas: " << rect.area() << endl;

    // Demonstrasi Block
    Block blk;
    blk.setValues(5.0, 3.0, 4.0);
    cout << "\nBlock:" << endl;
    blk.display();
    cout << "Volume: " << blk.area() << endl;

    return 0;
}
