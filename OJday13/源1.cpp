/*
ÌøÊ¯°å
*/

#include <iostream>
using namespace std;
int maxys(int x)
{
	for (int i = x - 1; i > 1; i--)
	{
		if (x % i == 0)
		{
			return i;
		}
	}
}

int main()
{
	int n, m;
	int sum = 0;
	while (cin >> n >> m)
	{
		while (n < m)
		{
			n = n + maxys(n);
			sum++;
		}
		if (n == m)
			cout << sum;
		else
			cout << -1;
	}
	return 0;
}
/*40%*/


#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	while (cin >> N >> M)
	{
		vector<int> v(M + 1, INT_MAX);
		v[N] = 0;
		for (int i = N; i <= M; i++)
		{
			if (v[i] == INT_MAX)
				continue;
			for (int j = 2; (j * j) <= i; j++)
			{
				if (i % j == 0)
				{
					if (i + j <= M)
						v[i + j] = min(v[i] + 1, v[i + j]);
					if (i + (i / j) <= M)
						v[i + (i / j)] = min(v[i] + 1, v[i + (i / j)]);
				}
			}
		}
		if (v[M] == INT_MAX)
			v[M] = -1;
		cout << v[M] << endl;
	}
	return 0;
}