#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle_cards(vector<int>& v)
{
	int sz = v.size() / 2;
	vector<int>vt;
	for (int i = 0; i < sz; i++)
	{
		vt.push_back(v[i]);
		vt.push_back(v[i + sz]);
	}
	return vt;
}

int main()
{
	int T = 0, n = 0, k = 0;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		vector<int> v(2 * n);
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < k; i++)
		{
			v = shuffle_cards(v);
		}
		for (int i = 0; i < 2 * n - 1; i++)
		{
			cout << v[i] << " ";
		}
		cout << v[2 * n - 1] << endl;
	}
	return 0;
}