/*
二进制中1的个数
*/

#include <iostream>
using namespace std;
int main()
{
	int num = 0, count = 0;
	while (cin >> num)
	{
		count = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((num >> i) & 1 == 1)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}