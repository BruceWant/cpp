#include <iostream>
#include <cstring>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str{"first"}, str2{"second"};
    if (str == str2)
    {
        cout << str << " is equal to " << str2 << endl;
    }
    else if ( str < str2)
    {
        cout << str << " is less than " << str2 << endl;
    }
    else
    {
        cout << str << " is greater than " << str2 << endl;
    }

    char chr[] = { 'f', 'i', 'r', 's', 't', '\0' };
    char chr2[] = { 's', 'e', 'c', 'o', 'n', 'd', '\0'};

    if (strcmp(chr, chr2) == 0)
    {
        cout << chr << " is equal to " << chr2<< endl;
    }
    else if (strcmp(chr, chr2) < 0)
    {
        cout << chr << " is less than " << chr2<< endl;
    }
    else
    {
        cout << chr << " is greater than " << chr2<< endl;
    }

    return 0;
}
