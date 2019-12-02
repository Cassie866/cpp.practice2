#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 0, m = 0;
	vector<vector<int>>v;
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> v[i][j];
			}
		}
		int i = n, j = m;
		while (i != 0 && j != 0)
		{
			if(v[i-1][j]==0)
		}
	}

	return 0;
}