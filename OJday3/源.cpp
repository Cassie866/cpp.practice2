/*
数组中出现次数超过一半的数字
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		int size = numbers.size();
		unordered_map<int, int> a;
		for (int i = 0; i < size; i++)
		{
			++a[numbers[i]];
			if (a[numbers[i]] > (size / 2))
				return numbers[i];
		}
		return 0;
	}
};

class Solution2 {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		int size = numbers.size();
		vector<int> a(100);
		for (int i = 0; i < size; i++)
		{
			++a[numbers[i]];
			if (a[numbers[i]] > (size / 2))
				return numbers[i];
		}
		return 0;
	}
};