/*Í¨Åä·û*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	while (getline(cin, s1))
	{
		getline(cin, s2);
		int i = 0, j = 0;
		while (i < s1.size() && j < s2.size())
		{
			if (s1[i] == s2[j] || s1[i] == '?')
			{
				i++;
				j++;
			}
			else if (s1[i] == '*')
			{
				i++;
				j++;
				while (s1[i] != s2[j])
					j++;
			}
			else
				cout << "false" << endl;
		}
		if (i == s1.size() - 1 && j == s2.size() - 1)
			cout << "true" << endl;
	}
	return 0;
}