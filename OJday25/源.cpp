#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n, f[10001], x; f[0] = 1; f[1] = 1;
	for (int i = 2; i < 10001; i++) 
		f[i] = (f[i - 1] % 10000 + f[i - 2] % 10000) % 10000;
	while (cin>>n)
	{
		while (n--)
		{
			cin >> x;
			printf("%04d", f[x]);
		}
		cout << endl;
	}
	return 0;
}