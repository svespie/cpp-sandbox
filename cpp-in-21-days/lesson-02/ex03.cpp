#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int num1, num2;

    cout << "enter two integers, separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " - " << num2 << " = " << num1-num2;
    cout << endl;
    cout << num1 << " * " << num2 << " = " << num1*num2;

    return 0;
}