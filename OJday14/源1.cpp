/*幸运的袋子*/

#include <iostream>
#include <cstdlib>
using namespace std;

int n;
int nums[1000];

int cmp(const void* a, const void* b) 
{
	return *(int*)a - *(int*)b;
}

// 思路：DFS生成全组合，同时注意剪枝、避免重复组合
int findall(int nums[], int index, long sum, long multi) 
{
	int count = 0;
	for (int i = index; i < n; i++) 
	{
		sum += nums[i];
		multi *= nums[i];
		if (sum > multi)
		{
			count += 1 + findall(nums, i + 1, sum, multi);
		}
		else if (nums[i] == 1)
		{
			count += findall(nums, i + 1, sum, multi);
		}
		else
		{
			break;
		}
		sum -= nums[i];
		multi /= nums[i];
		// 跳过相等的元素，避免重复组合
		while (i < n - 1 && nums[i] == nums[i + 1])
		{
			i++;
		}
	}
	return count;
}

int main(int argc, char* argv[])
{
	while (cin >> n) 
	{
		for (int i = 0; i < n; i++)
		{
			cin >> nums[i];
		}
		qsort(nums, n, sizeof(int), cmp);
		cout << findall(nums, 0, 0, 1) << endl;
	}
	return 0;
}