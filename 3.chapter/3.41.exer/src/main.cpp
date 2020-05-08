#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;


int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    vector<int> vec(begin(arr), end(arr));

    // for (auto a : arr)
    // {
    //     vec.push_back(a);
    // }
    for (auto &a : vec)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}
