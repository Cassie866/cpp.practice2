#include <iostream>
#include <vector>
using namespace std;

int fun(int m, int n)
{
	if (m < 1 || n < 1)
	{
		return 0;
	}
	vector<vector<int> > ret(m + 1, vector<int>(n + 1, 1));
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			ret[i + 1][j + 1] = ret[i][j + 1] + ret[i + 1][j];
		}
	}
	return ret[m][n];
}

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << fun(n, m) << endl;
	}
	return 0;
}