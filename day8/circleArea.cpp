#include <iostream>
#include <cmath>

using namespace std;

template <class T>
double circleArea(T rad) {
    return 3.14 * pow(rad, 2);
}

int main() {
    int int_r = 5;
    double double_r = 7.5;

    
    cout << "int radius: " << circleArea(int_r) << endl;

    cout << "radius double: " << circleArea(double_r) << endl;

    return 0;
}
