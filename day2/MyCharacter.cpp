#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

class Character
{
    private:
        string color;
        int eyes;
        int legs;

    public:
        void setColor(string);
        void setEyes(int);
        void setLegs(int);

        string getColor();
        int getEyes();
        int getLegs();

        void display();
};

void Character::setColor(string c){ 
    color = c; 
}

void Character::setEyes(int e){
    eyes = e;
}

void Character::setLegs(int l){
    legs = l;
}

string Character::getColor(){
    return color;
}

int Character::getEyes(){
    return eyes;
}

int Character::getLegs(){
    return legs;
}

void Character::display(){
        cout << "Character: " << endl;
        cout << "Color: " << color << endl;
        cout << "Eyes: " << eyes << endl;
        cout << "Legs: " << legs << endl;
        cout << endl;
}


int main() {
    srand(time(0));

    Character karakter1, karakter2;

    karakter1.setColor("Hijau");
    karakter1.setEyes(rand() % 11);
    karakter1.setLegs(rand() % 13);

    karakter2.setColor("Biru");
    karakter2.setEyes(rand() % 11);
    karakter2.setLegs(rand() % 13);

    karakter1.display();
    karakter2.display();

    return 0;
}
