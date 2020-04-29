#include <iostream>


int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    if (v1 <= v2)
    {
        for (; v1 <= v2; ++v1)
        {
            std::cout << v1 << " ";
        }
    }
    else
    {
        for (; v2 <= v1; ++v2)
        {
            std::cout << v2 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
