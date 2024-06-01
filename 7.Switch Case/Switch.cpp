// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    char action;
    float num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> action;

    switch (action) {
        case '+':
            cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"The difference of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
            break;
        case '/':
            cout<<"The division of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
            break;
        default:
            // if action doesn't match any case then
            cout << "Error! Invalid Action";
            break;
    }

    return 0;
}