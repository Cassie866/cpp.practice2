#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 *  奇数位上都是奇数或者偶数位上都是偶数
	 *  输入：数组arr，长度大于2
	 *  len：arr的长度
	 *  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
	 */
	void oddInOddEvenInEven(vector<int>& arr, int len)
	{
		for (int i = 0; i < arr.size(); ++i)
		{
			if (arr[i] % 2 != 0)
			{
				arr.push_back(arr[i]);
			}
		}

	}
};