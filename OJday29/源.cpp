#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
	/**
	 *	���������е���С������ɺ�
	 *	���룺��������arr
	 *	���أ����������е���С������ɺ�
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