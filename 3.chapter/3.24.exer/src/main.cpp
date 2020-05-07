#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
		vector<int> vec;
		int val = 0;
		while (cin >> val)
		{
				vec.push_back(val);
		}
		for (vector<int>::iterator it = vec.begin(); it < vec.end()-1; it+=2)
		{
				cout << *it + *(it+1) << " ";
		}
		if (vec.size() % 2 != 0)
				cout << *(vec.end()-1);
		cout << endl;

		return 0;
}
