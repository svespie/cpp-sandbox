#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int multiply(int a, int b);

int main(int argc, char **argcv)
{
    cout << "enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    int trickNumber = 56;

    int result = multiply(firstNumber, secondNumber);

    // the integers a and b are no longer in scope, they are local to multiply() and cannot be referenced outside of that function
    // likewise, trickNumber is local to main() and is not supplied to multiply() - thus multiply() cannot access that variable because it is out of scope
    // cout << a << " x " << b << " = " << c << endl << endl;  // --> compilation error (undefined)
    cout << firstNumber << " x " << secondNumber << " = " << result << endl;

    return 0;
}

int multiply(int a, int b)
{
    int c = a * b;
    return c;
}