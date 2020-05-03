#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
    string str;
    if (getline(cin, str))
    {
        cout << str << endl;
    }

    if (cin >> str)
    {
        cout << str << endl;
    }

    return 0;
}
