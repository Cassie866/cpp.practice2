#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
	/**
	 *	正数数组中的最小不可组成和
	 *	输入：正数数组arr
	 *	返回：正数数组中的最小不可组成和
	 */
	int getFirstUnFormedNum(vector<int> arr, int len)
	{
		sort(arr.begin(), arr.end());
		int min = arr[0];
		int max = 0;
		for (int i = 0; i < len; i++)
		{
			max += arr[i];
		}
		if ()
		{

		}
		else
		{
			return max + 1;
		}
	}
};