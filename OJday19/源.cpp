#include <iostream>
#include <vector>
using namespace std;

int qishuip(int n)
{
	int num = 0;
	while (n >= 3)
	{
		num += n / 3;
		n = n / 3 + n % 3;
	}
	if (n == 2)
		num += 1;
	return num;
}

int main()
{
	int a = 0;
	while (cin >> a)
	{
		cout << qishuip(a) << endl;
	}
	return 0;
}