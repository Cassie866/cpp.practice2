class Solution
{
public:
	int jumpFloorII(int number)
	{
		if (number == 1)
			return 1;
		if (number == 2)
			return 2;
		return jumpFloorII(number - 1) + jumpFloorII(number - 2) * 2;
	}
};