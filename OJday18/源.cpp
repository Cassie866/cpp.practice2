/*Í¨Åä·û*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int i = 0, j = 0;
		int k = i - 1, flag = 1;
		for (; j < s2.size(); j++)
		{
			if (s2[j] == s1[i] || s1[i] == '?')
			{
				i++;
			}
			else if (s1[i] == '*')
			{
				i++;
			}
			else if (k >= 0 && s1[k] == '*')
			{
				continue;
			}
			else
			{
				cout << "false" << endl;
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << "true" << endl;
	}
	return 0;
}