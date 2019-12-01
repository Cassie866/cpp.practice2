#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		vector<int>v(128, 0);
		bool flag = false;
		for (int i = 0; i < s.length(); ++i)
		{
			++v[s[i]];
		}
		for (int i = 0; i < s.length(); ++i)
		{
			if (v[s[i]] == 1)
			{
				cout << s[i] << endl;
				flag = true;
				break;
			}
		}
		if (flag == false)
			cout << "-1" << endl;
	}
	return 0;
}