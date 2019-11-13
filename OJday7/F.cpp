#include <iostream>
using namespace std;

int main()
{
	int n, f1 = 0, f2 = 1, f, count;
	cin >> n;
	while (1)
	{
		f = f2 + f1;
		count = 0;
		if (n == f)
		{
			break;
		}
		if (n < f)
		{
			count = (f - n) < (n - f2) ? (f - n) : (n - f2);
			break;
		}
		f1 = f2;
		f2 = f;
	}
	cout << count;
	return 0;
}