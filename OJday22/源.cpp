#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
	int min = a < b ? a : b;
	for (int i = min; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
		}
	}
}


int main()
{
	int n = 0, a = 0;
	while (cin >> n >> a)
	{
		vector<int> b(n);
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (b[i] <= a)
			{
				a += b[i];
			}
			else
			{
				a += Max(a, b[i]);
			}
		}
		cout << a << endl;
	}
	return 0;
}