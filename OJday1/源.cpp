/*
组队竞赛
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	long long max = 0;
	while (cin >> n)
	{
		v.resize(3 * n);
		for (int i = 0; i < 3 * n; i++)
		{
			cin >> v[i];
		}
	}
	/*
	排序，然后取下标为3n - 2，3n - 4 ，3n - 4... n+2，n位置的元素累加即可，
	相当下标为[0,n-1]的n个数做每组的最左边的数，剩下的2个数据两个为一组，
	大的值做最右边的数，次大的做中间值，这里就是把这个次大的值加起来
	*/
	sort(v.begin(), v.end());
	for (int i = n; i < 3 * n - 1; i += 2)
	{
		max += v[i];
	}
	cout << max;
	return 0;
}