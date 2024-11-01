#include <iostream>
#include <cmath>  

using namespace std;

class Shape {
protected:
    double Area;
public:
    
    Shape() : Area(0) {}

    
    virtual void Calculate_Area() = 0;

    
    virtual void Display() {
        cout << "Area: " << Area << endl;
    }
};

class Circle : public Shape {
private:
    double Radius;
public:
    
    Circle(double r) : Radius(r) {}

    
    void Calculate_Area() override {
        Area = M_PI * Radius * Radius;  
    }

    
    void Display() override {
        cout << "Circle with radius: " << Radius << endl;
        cout << "Area: " << Area << endl;
    }
};

class Rectangle : public Shape {
private:
    double Length;
    double Breadth;
public:
    
    Rectangle(double l, double b) : Length(l), Breadth(b) {}

    
    void Calculate_Area() override {
        Area = Length * Breadth;
    }

    
    void Display() override {
        cout << "Rectangle with length: " << Length << " and breadth: " << Breadth << endl;
        cout << "Area: " << Area << endl;
    }
};

// int main() {
//     Circle c(5.0);          
//     Rectangle r(4.0, 6.0);  

//     c.Calculate_Area();  
//     c.Display();         

//     r.Calculate_Area();  
//     r.Display();         

//     return 0;
// }

int main(int argc, const char * argv[]) {
    Shape *p;
    Circle C1(5);
    Rectangle R1(4, 6);

    p = &C1;
    p->Calculate_Area();
    p->Display();

    p = &R1;
    p->Calculate_Area();
    p->Display();

    return 0;
}
