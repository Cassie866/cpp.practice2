#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		int sum = 0;
		if (s.size() <= 4)
			sum += 5;
		if (s.size() >= 5 && s.size() <= 7)
			sum += 10;
		if (s.size() >= 8)
			sum += 25;

		int f1 = 0, f2 = 0, f3_n = 0, f4_n = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				f1 = 1;
			if (s[i] >= 'A' && s[i] <= 'Z')
				f2 = 1;
			if (s[i] >= '0' && s[i] <= '9')
			{
				f3_n++;
			}
			f4_n++;
		}

		if (f1 && !f2 || !f1 && f2)
			sum += 10;
		if (f1 && f2)
			sum += 20;

		if (f3_n > 1)
			sum += 20;
		if (f3_n)
			sum += 10;

		if (f4_n > 1)
			sum += 20;
		if (f4_n)
			sum += 10;

		if ((f1 || f2) && f3_n)
			sum += 2;
		if ((f1 || f2) && f3_n && f4_n)
			sum += 3;
		if (f1 && f2 && f3_n && f4_n)
			sum += 5;

		if (sum >= 90)
			cout << "VERY_SECURE" << endl;
		else if (sum >= 80)
			cout << "SECURE" << endl;
		else if (sum >= 70)
			cout << "VERY_STRONG" << endl;
		else if (sum >= 60)
			cout << "STRONG" << endl;
		else if (sum >= 50)
			cout << "AVERAGE" << endl;
		else if (sum >= 25)
			cout << "WEAK" << endl;
		else
			cout << "EVERY_WEAK" << endl;
	}
	return 0;
}