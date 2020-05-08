#include <iostream>
#include <cstring>


using std::cin;
using std::cout;
using std::endl;

int main()
{
    char str[] = {'a', 'b', 'c', '\0'};
    char str2[]= {'d', 'e', 'f', '\0'};
    char str3[10];

    strcpy(str3, str);
    strcat(str3+3, str2);
    cout << str3 << endl;

    return 0;
}
