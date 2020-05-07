#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
		int arr[10], arr2[10];
		for (int i = 0; i < 10; ++i)
		{
				arr[i] = i;
		}
		for (int i = 0; i < 10; ++i)
		{
				arr2[i] = arr[i];
		}

		for (int &a : arr)
				cout << a << " ";
		cout << endl;
		for (int &a : arr2)
				cout << a << " ";
		cout << endl;

		vector<int> vec(10, 0), vec2(10, 0);
		for (int i = 0; i < 10; ++i)
				vec[i] = i;
		vec2 = vec;

		for (int &a : vec)
		{
				cout << a << " ";
		}
		cout << endl;
		for (auto &a : vec2)
		{
				cout << a << " ";
		}
		cout << endl;

		return 0;
}
