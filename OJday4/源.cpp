#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a, b, c, d;
	double A, B, C;
	while (cin >> a >> b >> c >> d)
	{
		A = (a + c) / 2;
		B = (c - a) / 2;
		C = (d - b) / 2;
		if ((A - B == a) && (B - C == b) && (A + B == c) && (B + C == d))
		{
			cout << A << " " << B << " " << C;
		}
		else
		{
			cout << "NO";
		}
	}
	return 0;
}