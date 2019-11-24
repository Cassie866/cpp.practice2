/*╠ДпняН╩тхЩ╫г*/

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		if (n <= 2)
			cout << -1 << endl;
		else
		{
			if (n % 2 == 1)
				cout << 2 << endl;
			if (n % 4 == 2)
				cout << 4 << endl;
			if (n % 4 == 0)
				cout << 3 << endl;
		}
	}
	return 0;
}