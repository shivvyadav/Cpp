// program to Typecaste(changing the data types of variables)

#include <iostream>
using namespace std;

int main()
{
    int x = 24;
    float y = 34.67;

    cout << "The value of x is " << x << endl;
    cout << "The value of x is " << float(x) << endl;    // or (float)x

    cout << "The value of y is " << y << endl;
    cout << "The value of y is " << int(y) << endl;      // or (int)y

    return 0;
}