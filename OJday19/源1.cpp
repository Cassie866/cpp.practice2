#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (s1.size() > s2.size())
			swap(s1, s2);
		string str;
		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = i; j < s1.size(); j++)
			{
				string temp = s1.substr(i, j - i + 1);
				if (int(s2.find(temp)) < 0)
					break;
				else if (str.size() < temp.size())
					str = temp;
			}
		}
		cout << str << endl;
	}
	return 0;
}