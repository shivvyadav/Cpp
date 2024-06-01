// Program to check whether a number is positive, negative or zero

#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else if (number < 0)
    {
        cout << "You entered a negative integer: " << number << endl;
    }
    else
    {
        cout << "You entered 0." << endl;
    }

    return 0;
}