/*΢�ź��*/

class Gift
{
public:
	int getValue(vector<int> gifts, int n)
	{
		map<int, int>m;
		for (int i = 0; i < n; ++i)
		{
			++m[gifts[i]];
			if (m[gifts[i]] > n / 2)
				return gifts[i];
		}
		return 0;
	}
};

class Gift
{
public:
	int getValue(vector<int> gifts, int n)
	{
		sort(gifts.begin(), gifts.end()); //����һ���������֮���Ȼ�����м� 
		int middle = gifts[n / 2];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			//ͳ�������м�����ĸ��� 
			if (gifts[i] == middle)
			{
				count++;
			}
		}//�����������һ�룬����ڳ���һ����� 
		if (count > n / 2)
			return middle;
		else
			return 0;
	}
};
