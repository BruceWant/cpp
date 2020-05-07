#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
		int arr[10];
		for (int i = 0; i < 10; ++i)
		{
				arr[i] = i;
		}
		for (int i = 0; i < 10; ++i)
		{
				cout << arr[i] << " ";
		}
		cout << endl;
		for (int &a : arr)
		{
				cout << a << " ";
		}
		cout << endl;

		return 0;
}
