// function template 
#include <iostream>
using namespace std;

template <class T, class U>
T GetMin(T a, U b)
{
    return (a < b ? a : b);
}

int main()
{
    int i, j=6;
    long l = 10;
    
    i = GetMin<int, long>(j, l); 
    
    std::cout <<i<< std::endl;
    return 0;
} 