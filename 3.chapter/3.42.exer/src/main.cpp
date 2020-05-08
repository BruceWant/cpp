#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec{ 1, 2, 3, 4, 5 };
    int arr[5];

    for (int i = 0; i < 5; ++i)
    {
        arr[i] = vec[i];
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
