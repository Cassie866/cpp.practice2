#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	 *  ����λ�϶�����������ż��λ�϶���ż��
	 *  ���룺����arr�����ȴ���2
	 *  len��arr�ĳ���
	 *  ��arr����������λ�϶�����������ż��λ�϶���ż��
	 */
	void oddInOddEvenInEven(vector<int>& arr, int len)
	{
		for (int i = 0; i < arr.size(); ++i)
		{
			if (arr[i] % 2 != 0)
			{
				arr.push_back(arr[i]);
			}
		}

	}
};