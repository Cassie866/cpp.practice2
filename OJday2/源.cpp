#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	while (cin >> n)
	{
		v.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
	}
	int count = 1;
	for (int i = 1; i < n - 1; i++)
	{
		if ((v[i - 1]<v[i] && v[i]>v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1]))
		{
			count++;
			if (i != n - 3)
			{
				i++;
			}
		}
	}
	cout << count;
	return 0;
}