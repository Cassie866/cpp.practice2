#include <iostream>
using namespace std;
int main()
{
	int a, b, max = 1, min = 0;
	cin >> a >> b;
	int n = a < b ? a : b;
	for (int i = n; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
			break;
		}
	}
	min = (a * b) / max;
	cout << min;
	return 0;
}