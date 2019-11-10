#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool Check(char c, string s)
{
	for (int i = 0; i < s.size(); i++) 
	{
		if (c == s[i]) 
		{
			return true;
		}
	}
	return false;
}

int main()
{
	string s;
	while (cin >> s) 
	{
		string s2;        
		for (int i = 0; i < s.size(); i++) 
		{
			if (!Check(s[i], s2))
			{
				s2 += s[i];
			}
		}
		cout << s2;
	} 
	return 0;
}