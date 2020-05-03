#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> vec;
    int var;
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
