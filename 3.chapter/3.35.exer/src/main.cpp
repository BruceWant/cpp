#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main()
{
    int arr[10] = { 1, 2, 3};
    cout << arr[0] << endl;

    int *p = &arr[0];
    *p = 0;
    cout << *p << endl;

    return 0;
}
