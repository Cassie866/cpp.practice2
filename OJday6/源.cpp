#include <iostream>
using namespace std;
int main()
{
	int W, H, counts = 0;
	cin >> W >> H;
	if (W % 4 == 0 || H % 4 == 0)
	{
		counts = W * H / 2;
	}
	else
	{
		counts = W * H / 2 + 1;
	}
	cout << counts << endl;
	return 0;
}