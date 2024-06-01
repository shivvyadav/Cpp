// constant and manipulators

#include <iostream>
#include <iomanip> //Header file for manipulators
using namespace std;

int main()
{
    int a = 45;
    a = 23;

    const int b = 155;
    // b=12  --->Gives error because b is constant

    cout << "The value of a:" << a << endl;
    cout << "The value of b:" << b << endl;

    // C++ manipulators

    cout << "The value of a:" << setw(5) << a << endl;   //setw(n)-->takes n width for content to display
    cout << "The value of b:" << setw(5) << b << endl;
    return 0;
}