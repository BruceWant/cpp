#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> vec;
    string str;
    while (cin >> str)
    {
        for (auto &c : str)
        {
            if (isalpha(c))
            {
                c = toupper(c);
            }
        }
        vec.push_back(str);
    }

    for (decltype(vec.size()) i = 0; i < vec.size(); ++i)
    {
        if (i != 0 && i % 8 == 0)
            cout << '\n';
        cout << vec[i] << ' ';
    }
    cout << endl;

    return 0;
}

