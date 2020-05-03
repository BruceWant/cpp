#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> vec;
    string var;
    while (cin >> var)
    {
        vec.push_back(var);
    }

    for (auto &c : vec)
    {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
