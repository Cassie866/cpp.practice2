/*输入一个年份，判断是不是闰年*/
#include <iostream>
using namespace std;


void P(int x, int& y) { y = x + y; x = y % 4; }
	
int main()
{
	int x = 5;
	switch (2 * x % 3)
	{
	case 1: cout << x << ' ';
	case3: cout << 2 * x + 1 << ' ';
	case 9: cout << 3 * x - 1 << ' '; break;
	default: cout << "default" << endl;
	}
	cout << "switch end." << endl;
	return 0;
}