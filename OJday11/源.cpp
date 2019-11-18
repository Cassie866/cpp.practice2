#include <iostream>
using namespace std;

bool issushu(int x)
{
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int min = n;
		int i, j;
		int mini, minj;
		for (i = 2; i < n - 1; i++)
		{
			for (j = n - 2; j > 2; j--)
			{
				if (i + j == n && issushu(i) && issushu(j))
				{
					if (abs(i - j) < min)
					{
						mini = i;
						minj = j;
						min = abs(i - j);
					}
				}
			}
		}
		cout << mini << endl;
		cout << minj << endl;
	}
	return 0;
}