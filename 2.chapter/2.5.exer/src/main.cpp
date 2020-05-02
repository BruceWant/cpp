#include <iostream>
#include <typeinfo>

int main()
{
    std::cout << typeid(L'a').name() << '\n';

    return 0;
}
