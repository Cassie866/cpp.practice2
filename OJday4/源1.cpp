#include <iostream>
#include <stdio.h>
using namespace std;

int m2n(int x, int n)
{
	int p = 1, b = 0, c;
	while (1)
	{
		c = x % n;
		x /= n;
		b += c * p;
		p *= 10;
		if (x < n)
		{
			b += x * p;
			break;
		}
	}
	return b;
}

int main()
{
	long long m;
	int n;
	while (cin >> m >> n)
	{
		m = m2n(m, n);
	}
	cout << m;
	return 0;
}