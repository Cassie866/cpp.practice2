#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n = 0, count1 = 0, count2 = 0;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (v[i - 1].size() < v[i].size())
		{
			count1++;
		}
		if (v[i - 1] < v[i])
		{
			count2++;
		}
	}
	if (count1 == n - 1 && count2 != n - 1)
	{
		cout << "lengths";
	}
	if (count1 != n - 1 && count2 == n - 1)
	{
		cout << "lexicographically";
	}
	if (count1 == n - 1 && count2 == n - 1)
	{
		cout << "both";
	}
	if (count1 != n - 1 && count2 != n - 1)
	{
		cout << "none";
	}
	return 0;
}