#include <iostream>

// declare a function
int square(int x);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "usage:\n\n  " << argv[0] << " <integer>" << std::endl;
        return 0;
    }

    // note, no error handling here :)
    int myInt = atoi(argv[1]);
    int squared = square(myInt);

    std::cout << "the square of " << myInt << " is " << squared << std::endl;

    return 0;
}

int square(int x)
{
    return x*x;
}