/*�����б��Ϊ1~n��n���˿��ƺͱ��Ϊ1~n��n�����ӣ�
������Ҫ��n���Ʒֱ�ŵ�n��������ȥ����ÿ������ֻ�ܷ�һ���ƣ�
һ���ж����ֲ�ͬ�ķŷ���*/

#include <vector> 
#include <iostream> 
using namespace std;

void Dfs(int index, int n, vector<int>& boxs, vector<int>& book)
{
	if (index == n + 1)
	{
		for (int i = 1; i <= n; i++)
			cout << boxs[i] << " ";
		cout << endl;
		return; //���ϻ���    
	}

	for (int i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			boxs[index] = i;
			book[i] = 1;
			//���ڵ�i�����Ѿ�������         
			//������һ������          
			Dfs(index + 1, n, boxs, book);
			//����һ�����ӻ��˵���ǰ���ӣ�ȡ����ǰ���ӵ��ƣ����Է��������ơ�      
			book[i] = 0;
		}
	}
}


int main()
{
	int n;
	vector<int> boxs;
	vector<int> books;
	cin >> n;
	boxs.resize(n + 1, 0);
	books.resize(n + 1, 0);
	Dfs(1, n, boxs, books);
	return 0;
}