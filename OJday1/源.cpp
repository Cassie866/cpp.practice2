/*
��Ӿ���
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	long long max = 0;
	while (cin >> n)
	{
		v.resize(3 * n);
		for (int i = 0; i < 3 * n; i++)
		{
			cin >> v[i];
		}
	}
	/*
	����Ȼ��ȡ�±�Ϊ3n - 2��3n - 4 ��3n - 4... n+2��nλ�õ�Ԫ���ۼӼ��ɣ�
	�൱�±�Ϊ[0,n-1]��n������ÿ�������ߵ�����ʣ�µ�2����������Ϊһ�飬
	���ֵ�����ұߵ������δ�����м�ֵ��������ǰ�����δ��ֵ������
	*/
	sort(v.begin(), v.end());
	for (int i = n; i < 3 * n - 1; i += 2)
	{
		max += v[i];
	}
	cout << max;
	return 0;
}