#include <iostream>
#include <typeinfo>

int main()
{
    std::cout << typeid('a').name() << '\n';
    std::cout << typeid(L'a').name() << '\n';
    std::cout << typeid("a").name() << '\n';
    std::cout << typeid(L"a").name() << '\n';

    return 0;
}
