#include <iostream>
#include <string>
using namespace std;

bool isHuiW(string& s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] != s[s.size() - 1 - i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string A, B;
	int count = 0;
	int num = 0;
	getline(cin, A);
	getline(cin, B);
	for (size_t i = 0; i < A.size(); i++)
	{
		string s(A);
		s.insert(i, B);
		if (isHuiW(s))
		{
			count++;
		}
	}
	cout << count;
	return 0;
}