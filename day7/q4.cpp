#include <iostream>

using namespace std;

class DateTime {
private:
    int day, month, year;
    int hours, minutes, seconds;

public:
    
    DateTime() : day(0), month(0), year(0), hours(0), minutes(0), seconds(0) {}

    
    void SetValue(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    
    void SetValue(int d, int m, int y, int h) {
        day = d;
        month = m;
        year = y;
        hours = h;
        minutes = 0;
        seconds = 0;
    }

    
    void SetValue(int d, int m, int y, int h, int min) {
        day = d;
        month = m;
        year = y;
        hours = h;
        minutes = min;
        seconds = 0;
    }

    
    void SetValue(int d, int m, int y, int h, int min, int s) {
        day = d;
        month = m;
        year = y;
        hours = h;
        minutes = min;
        seconds = s;
    }

    
    void Display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    DateTime dt;

    
    dt.SetValue(3, 10, 2024);
    dt.Display();
    cout << endl;

    
    dt.SetValue(3, 10, 2024, 14);
    dt.Display();
    cout << endl;

    
    dt.SetValue(3, 10, 2024, 14, 30);
    dt.Display();
    cout << endl;

    
    dt.SetValue(3, 10, 2024, 14, 30, 45);
    dt.Display();

    return 0;
}
