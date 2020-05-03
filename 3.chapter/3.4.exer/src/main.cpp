#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str, str2;
    cin >> str >> str2;
    if (str == str2)
    {
        cout << str << " is equal to " << str2 << endl;
    }
    else if (str > str2)
    {
        cout << str << " is greater than " << str2 << endl;
    }
    else
    {
        cout << str << " is less than " << str2 << endl;
    }

    
    if (str.size() == str2.size())
    {
        cout << str.size() << " is equal to " << str2.size() << endl;
    }
    else if (str.size() > str2.size())
    {
        cout << str.size() << " is greater than " << str2.size() << endl;
    }
    else
    {
        cout << str.size() << " is less than " << str2.size() << endl;
    }
    return 0;
}
