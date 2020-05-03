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

    for (vector<int>::size_type i = 0; i < vec.size() - 1; i += 2)
    {
        cout << vec[i] + vec[i+1] << ' ';
    }
    if (vec.size() % 2 != 0)
        cout << vec[vec.size()-1];
    cout << endl;


    vector<int>::size_type len = vec.size();
    for (vector<int>::size_type i = 0; i < vec.size() / 2; ++i)
    {
        cout << vec[i] + vec[len-1-i] << ' ';
    }
    if (len % 2 != 0)
        cout << vec[len/2];
    cout << endl;

    return 0;
}
