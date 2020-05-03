#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
    string str, ct;
    while (cin >> str)
    {
        if (ct.empty())
        {
            ct += str;
        }
        else
        {
            ct = ct + " " + str;
        }
    }
    cout << ct << endl;

    for (auto i = ct.cbegin(); i < ct.cend(); ++i)
    {
        if (*i == ' ')
            cout << endl;
        else
            cout << *i;
    }
    cout << endl;
   return 0; 
}
