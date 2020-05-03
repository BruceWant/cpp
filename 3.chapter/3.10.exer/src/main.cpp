#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
    string str;
    while (cin >> str)
    {
        for (const auto &c : str)
        {
            if (!ispunct(c))
            {
                cout << c;
            }
        }
    }
    cout << endl;

    return 0;
}
