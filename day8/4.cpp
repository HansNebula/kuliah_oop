#include <iostream>
using namespace std;

template <class T>
class mypair
{
    private:
        T a,b;
    public:
        mypair (T first, T second) {
            a = first;
            b = second;
        }
        T getmax();
};

template <class T>
T mypair<T>::getmax() {
    T retval;
    retval = a > b ? a: b;
    return retval;
}

int main(){
    mypair<int> myobject (115, 36); 
    cout << myobject.getmax()<<endl;
    return 0;
}