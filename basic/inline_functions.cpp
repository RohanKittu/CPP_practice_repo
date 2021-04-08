#include <iostream>
using namespace std;

inline int add(int, int);


int main()
{
    int num1 = 12;
    int num2 = 13;
    cout << add(num1, num2) << endl;
    return 0;
}

// inline functions are faster as compare to normal functions of cpp
inline int add(int a, int b)
{
    return a + b;
}