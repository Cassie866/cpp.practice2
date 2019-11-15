
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		int temp = 0, jw = 0;
		while (a.size() < b.size())
			a = "0" + a;
		while (a.size() > b.size())
			b = "0" + b;
		for (int i = a.size() - 1; i >= 0; i--)
		{
			temp = a[i] - '0' + b[i] - '0' + jw;
			a[i] = temp % 10 + '0';
			if (temp > 9)
				jw = 1;
			else
				jw = 0;
		}
		if (jw == 1)
			a = "1" + a;
		cout << a << endl;
	}
	return 0;
}
