#include <iostream>


int main()
{
    // std::cin >> int in;
    // int i = { 3.14 };
    // double salary = wage = 9999.99;
    int i = 3.14, sum = 0;

    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;

    int &rval = 1.01;
    return 0;
}
