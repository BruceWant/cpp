#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
    string str = "hello, world\n";
    cout << str;
    
    for (int i = 0; i < str.size(); ++i)
    {
        str[i] = 'X';
    }
    cout << str << endl;

    auto it = str.begin();
    while (str.end() != it)
    {
        *it = 'Y';
        ++it;
    }
    cout << str << endl;

    return 0;
}
