#include <iostream>
#include <vector>
using namespace std;

int mima(int x)
{
	long long a11 = 1, a12 = 1, a21 = 1, a22 = 0;
	for (int i = 0; i < x; i++)
	{
		long long t1 = a11, t2 = a12, t3 = a21, t4 = a22;
		a11 = t1 * t1 + t2 * t3;
		a12 = t1 * t2 + t2 * t4;
		a21 = t3* t1 + t4 * t3;
		a22 = t3 * t2 + t4 * t4;
	}
	return  a11 % 10000;
}



int main()
{
	cout << mima(18) << endl;
	return 0;
}
//
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		vector<int> v(n, 0);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << mima(v[i]);
//		}
//		cout << endl;
//	}
//	return 0;
//}