#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
	int Mi(int x)
	{
		int r = 1, i = 0;
		for (; i < x; i++)
		{
			r *= 10;
		}
		return r;
	}

	int StrToInt(string str)
	{
		int sz = str.size();
		int x = 0, i = 0;
		vector<int>v(0);
		if (sz == 0)
		{
			return 0;
		}
		if (str[0] == '+' || str[0] == '-')
		{
			for (i = 1; i < sz; i++)
			{
				if (str[i] > '0' && str[i] < '9')
				{
					x = str[i] - '0';
					v.push_back(x);
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			for (i = 0; i < sz; i++)
			{
				if (str[i] > '0' && str[i] < '9')
				{
					x = str[i] - '0';
					v.push_back(x);
				}
				else
				{
					return 0;
				}
			}
		}
		int sz2 = v.size();
		int r = 0;
		for (i = 0; i < sz2; i++)
		{
			r += v[i] * Mi(sz2 - 1 - i);
		}
		if (str[0] == '-')
		{
			r = -r;
		}
		return r;
	}
};