#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] >= 65 && s[i] <= 71)
			{
				s[i] = s[i] - '0' + 5 + '0';
			}
		}
		for (auto& e : s)
		{
			cout << e;
		}
		cout << endl;
	}
	return 0;
}