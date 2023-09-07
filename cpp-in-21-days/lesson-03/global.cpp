#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// global variables - don't to this but the language will allow you to
int firstNumber = 0;
int secondNumber = 0;
int result = 0;

int multiply();

int main(int argc, char **argv)
{
    cout << "enter the first number: ";
    cin >> firstNumber;

    cout << "enter the second number: ";
    cin >> secondNumber;

    int result = multiply();

    // firstNumber and secondNumber are globally available, which should sound icky because it is
    // global variables make it challenging to track down logic errors related to such values
    cout << firstNumber << " x " << secondNumber << " = " << result << endl;

    return 0;
}

int multiply()
{
    return firstNumber * secondNumber;
}
