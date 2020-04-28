#include <iostream>


int main()
{
    int sum = 0;
    int cnt = 50;

    while (cnt <= 100)
    {
        sum += cnt;
        ++cnt;
    }
    std::cout << "sum: " << sum << std::endl;

    return 0;
}
