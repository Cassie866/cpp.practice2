#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int  mima(int x)
{
	long long a11 = 1, a12 = 1, a21 = 1, a22 = 0;
	long long x11 = 1, x12 = 1, x21 = 1, x22 = 0;
	long long t11 = 0, t12 = 0, t21 = 0, t22 = 0;
	for (int i = 1; i < x; i++)
	{
		t11 = x11;
		t12 = x12;
		t21 = x21;
		t22 = x22;
		x11 = t11 * a11 + t12 * a21;
		x12 = t11 * a12 + t21 * a22;
		x21 = t21 * a11 + t22 * a21;
		x22 = t21 * a12 + t22 * a22;
	}
	return  x11 % 10000;
}

//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		vector<int>v(n, 0);
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> v[i];
//		}
//		for (int i = 0; i < n; ++i)
//		{
//			printf("%04d", mima(v[i]));
//		}
//		cout << endl;
//	}
//	return 0;
//}