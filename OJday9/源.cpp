#include <iostream>
#include <vector>
using namespace std;


int fun(int m, int n)
{
	if (m < 1 || n < 1) 
	{ 
		return 0; 
	}
	vector<vector<int> > ret(m, vector<int>(n, 1));
	for (int i = 1; i < m; ++i) 
	{
		for (int j = 1; j < n; ++j) 
		{               
			ret[i][j] = ret[i - 1][j] + ret[i][j - 1];
		}
	}
	return ret[m - 1][n - 1];
}





int main()
{
	int n, m;
	cin >> n >> m;
	cout << fun(n, m);
	return 0;
}