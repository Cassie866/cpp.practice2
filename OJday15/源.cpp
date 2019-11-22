/*
ÊÖÌ×Åä¶Ô
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Gloves
{
public:
	int findMinimum(int n, vector<int> left, vector<int> right)
	{
		int count = 2;
		vector<int> v1, v2;
		int lt = 0, rt = 0;
		for (int i = 0; i < n; i++)
		{
			if (left[i] != 0 && right[i] == 0)
				count += left[i];
			if (left[i] == 0 && right[i] != 0)
				count += right[i];
			if (left[i] != 0 && right[i] != 0)
			{
				lt += left[i];
				v1.push_back(left[i]);
				rt += right[i];
				v2.push_back(right[i]);
			}
		}
		if (lt < rt)
		{
			sort(v1.begin(), v1.end());
			for (int i = 1; i < v1.size(); i++)
				count += v1[i];
		}
		else
		{
			sort(v2.begin(), v2.end());
			for (int i = 1; i < v2.size(); i++)
				count += v2[i];
		}
		return count;
	}
};

int main()
{
	Gloves a;
	vector<int> v1 = { 0,7,1,6 };
	vector<int> v2 = { 1,5,0,6 };
	int c=a.findMinimum(4, v1, v2);
	return 0;
}