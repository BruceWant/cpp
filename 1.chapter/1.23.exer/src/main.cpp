#include "Sales_item.h"


int main()
{
    Sales_item cur, item;
    if (std::cin >> cur)
    {
        int cnt = 1;
        while (std::cin >> item)
        {
            if (cur.isbn() == item.isbn())
                ++cnt;
            else
            {
                std::cout << cur.isbn() << " occurs " << cnt
                          << " times.\n";
                cur = item;
                cnt = 1;
            }
        }
        std::cout << cur.isbn() << " occurs " << cnt
                  << " times.\n";
    }

    return 0;
}
