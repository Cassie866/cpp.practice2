#include <iostream>
#include <cmath>
#include <string> 
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		int len, i, sum;
		len = s.length();
		i = 0;
		sum = 0;
		while (i < len)
		{
			sum = (sum + s[i] - '0') % 9;
			i++;
		}
		if (sum == 0)
			sum = 9;
		cout << sum << endl;
	}
	return 0;
}