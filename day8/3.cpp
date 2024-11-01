#include <iostream>
using namespace std;

template <class T>
class mypair
{
    private:
        T values[2];
    public:
        mypair (T first, T second) {
        values[0] = first;
        values[1] = second;
    }
};
int main(){
    mypair<int> myobject (115, 36);
    mypair<double> myfloats (3.0, 2.18);

    return 0;
}