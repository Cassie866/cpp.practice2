/*长整数相加*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		while (s1.size() < s2.size())
			s1 = '0' + s1;
		while (s2.size() < s1.size())
			s2 = '0' + s2;
		int temp = 0;
		for (int i = s1.size() - 1; i >= 0; i--)
		{
			int t = s1[i] - '0' + s2[i] - '0' + temp;
			if (t > 9)
				temp = 1;
			else
				temp = 0;
			s1[i] = t % 10 + '0';
		}
		if (temp == 1)
			s1 = '1' + s1;
		cout << s1 << endl;
	}
	return 0;
}