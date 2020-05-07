#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;


int main()
{
	vector<int> vec(10, 20);
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
			*it = 2 * (*it);
	}
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
			cout << *it << " ";
	}
	cout << endl;

	return 0;
}
