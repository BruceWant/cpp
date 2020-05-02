#include "Sales_item.h"

int main()
{
    Sales_item item, sum;
    std::cin >> sum;
    while (std::cin >> item)
    {
        if (item.isbn() != sum.isbn())
        {
            std::cout << sum.isbn() << " is not equal to "
                      << item.isbn() << std::endl;
            continue;
        }
        else
            sum += item;
    }
    std::cout << sum << std::endl;

    return 0;
}
