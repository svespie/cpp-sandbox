#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    // delcare a variable to store input
    int myNumber;

    cout << "enter an integer: ";

    // store the input into myNumber
    cin >> myNumber;

    // can also work for string data
    cout << endl << "enter your name: ";
    string name;
    cin >> name;

    cout << endl << name << " entered " << myNumber << endl;

    return 0;
}