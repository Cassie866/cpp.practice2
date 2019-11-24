#include <iostream>
using namespace std;

bool isPnum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int n = 0, count = 0;
	while (cin >> n)
	{
		count = 0;
		for (int i = 1; i < n; i++)
		{
			if (isPnum(i))
				count++;
		}
		cout << count << endl;
	}
	return 0;
}