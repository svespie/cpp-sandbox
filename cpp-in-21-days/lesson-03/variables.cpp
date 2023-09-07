#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv)
{
    cout << "this program multiplies two numbers" << endl;

    cout << "enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    int result = firstNumber * secondNumber;

    cout << firstNumber << " x " << secondNumber << " = " << result << endl;

    return 0;
}