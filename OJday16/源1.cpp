#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
	string s;
	string str = "345678910JQKA2jokerJOKER";
	while (getline(cin, s)) 
	{
		if (s.find("joker JOKER"))
			cout << "joker JOKER" << endl;
		else 
		{
			int d = s.find('-');
			string s1 = s.substr(0, d);
			string s2 = s.substr(d + 1);
			int c1 = count(s1.begin(), s1.end(), ' ');
			int c2 = count(s2.begin(), s2.end(), ' ');

			char first1 = s1[1];
			char first2 = s2[1];
				
			/*string first1 = s1.substr(0, s1.find(' '));
			string first2 = s2.substr(0, s2.find(' '));*/
			if (c1 == c2) 
			{
				if (str.find(first1) > str.find(first2))
					cout << s1 << endl;
				else
					cout << s2 << endl;
			}
			else
			{
				if (c1 == 3)
					cout << s1 << endl;
				else if (c2 == 3)
					cout << s2 << endl;
				else
					cout << "ERROR" << endl;
			}
		}
	}
}