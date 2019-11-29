#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	string s;
	while (cin >> n >> s)
	{
		int num1 = 0, num2 = 0;
		if (n <= 4)
		{
			cout << 1 << 2 << 3 << 4 << endl;
		}
		char* p = &s[0];
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'U')
			{
				if (p == &s[s.length() - 1])
					p = &s[0];
				p++;
			}
			if (s[i] == 'D')
			{
				if (p == &s[0])
					p = &s[s.length() - 1];
				p--;
			}
		}
		cout << *p << endl;
	}
		return 0;
}