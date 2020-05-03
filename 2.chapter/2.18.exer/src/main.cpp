#include <iostream>


int main()
{
    int *p, val = 10, val2 = 20;

    p = &val;
    std::cout << "p: " << *p << '\n';
    p = &val2;
    std::cout << "p: " << *p << '\n';
    *p = 15;
    std::cout << "p: " << *p << '\n';

    return 0;
}
