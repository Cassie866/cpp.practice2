/*
字符串中找出连续最长的数字串
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, s2, s3;
	getline(cin, s);
	int count = 0, max = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' ||
			s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
		{
			count++;
			s2.push_back(s[i]);
		}
		else
		{
			count = 0;
			s2.clear();
		}
		if (count >= max)
		{
			max = count;
			s3 = s2;
		}
	}
	cout << s3;
	return 0;
}