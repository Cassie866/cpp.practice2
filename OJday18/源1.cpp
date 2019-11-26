/*อรืำ*/
#include <iostream>
using namespace std;

int Rabbits(int month)
{
	if (month < 3)
		return 1;
	else
		return Rabbits(month - 1) + Rabbits(month - 2);
}

int main()
{
	int month = 0;
	while (cin >> month)
	{
		cout << Rabbits(month) << endl;
	}
	return 0;
}