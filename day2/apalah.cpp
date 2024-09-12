#include "iostream"

class kendaraan
{
    private:  
        string merk;
        int banyakRoda;
    public:
        void setMerk(string m){
            merk = m;
        }
        void setBanyakRoda(int r){
            banyakRoda = r;
        }
};

class mobil : kendaraan
{
    private:
        string mesin;
    public:
        int kocak;
};

int main(){
    mobil avanza;
    avanza.setMerk("apanza");
}