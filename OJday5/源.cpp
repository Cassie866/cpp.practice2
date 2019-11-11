

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, sum = 0, max = 0;
	vector<int> v(100000);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += v[j];
			max = sum > max ? sum : max;
		}
	}
	cout << max;
	return 0;
}