/*计算日期是一年中的第几天*/
#include <iostream>
using namespace std;
int getDays(int year, int month)
{
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = days[month - 1];
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month == 2)
			day += 1;
	}
	return day;
}

int main()
{
	int year, month, day, days;
	while (cin >> year >> month >> day)
	{
		days = 0;
		for (int i = 1; i < month; i++)
		{
			days += getDays(year, i);
		}
		days += day;
		cout << days << endl;
	}
	return 0;
}