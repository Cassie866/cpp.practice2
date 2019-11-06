/*
É¾³ıs1ÖĞËùº¬s2µÄ×Ö·û
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	string::iterator it;
	for (it = s1.begin(); it < s1.end(); it++)
	{
		for (int i = 0; i < s2.size(); i++)
		{
			if (*it == s2[i])
			{
				s1.erase(it);
				it--;
			}
		}
	}
	cout << s1;
	return 0;
}