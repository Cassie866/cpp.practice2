/*ɾ�������ַ�*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	string::iterator it;
	for (it = s1.begin(); it < s1.end(); it++)
	{
		for (int i = 0; i < s2.size(); i++)
		{
			if (*it == s2[i])
			{
				s1.erase(it);
				it--;
			}
		}
	}
	cout << s1;
	return 0;
}



//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	// ע�����ﲻ��ʹ��cin���գ���Ϊcin�����ո�ͽ����ˡ�
//	// oj��IO�����ַ������ʹ��getline��
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	// ʹ�ù�ϣӳ��˼����str2ͳ���ַ����ֵĴ���
//	int hashtable[256] = { 0 };
//	for (size_t i = 0; i < str2.size(); ++i)
//	{
//		hashtable[str2[i]]++;
//	}
//	// ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ���
//	// str2��û�г��ֹ�������+=��ret��ע��������ò�Ҫstr1.erases(i)
//	// ��Ϊ�߱�������erase�����׳���
//	string ret;
//	for (size_t i = 0; i < str1.size(); ++i)
//	{
//		if (hashtable[str1[i]] == 0)
//			ret += str1[i];
//	}
//	cout << ret << endl;
//	return 0;
//}