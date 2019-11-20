/*²ÎÊı½âÎö*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count1 = 0;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
				count1++;
			if (s[i] == '"')
			{
				s[i] = ' ';
				for (int j = 0; j < s.size(); j++)
				{
					if (s[j] == '"')
					{
						s[j] == ' ';
						break;
					}
				}
			}
		}
		cout << count1 + 1 << endl;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ')
				cout << s[i];
			else
				cout << endl;
		}
	}
	return 0;
}