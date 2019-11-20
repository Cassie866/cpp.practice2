/*
ÌøÊ¯°å
*/

#include <iostream>
using namespace std;
int maxys(int x)
{
	for (int i = x - 1; i > 1; i--)
	{
		if (x % i == 0)
		{
			return i;
		}
	}
}

int main()
{
	int n, m;
	int sum = 0;
	while (cin >> n >> m)
	{
		while (n < m)
		{
			n = n + maxys(n);
			sum++;
		}
		if (n == m)
			cout << sum;
		else
			cout << -1;
	}
	return 0;
}