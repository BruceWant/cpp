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
    for (char &c : str)
    {
        c = 'X';
    }
    cout << str << endl;

    return 0;
}
