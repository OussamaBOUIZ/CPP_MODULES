#include <iostream>


int main()
{
    int a = 1;
    int shiftToLeftA;
    int shiftToRightA;
    shiftToLeftA = a << 2;
    shiftToRightA = a >> 2;
    int c,d;

    c = shiftToLeftA >> 2;
    d = shiftToRightA << 2;

    std::cout << shiftToLeftA << std::endl;
    std::cout << shiftToRightA << std::endl;
    std::cout << "back----" << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    return (0);
}