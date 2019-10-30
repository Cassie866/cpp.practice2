/*假如有编号为1~n的n张扑克牌和编号为1~n的n个盒子，
现在需要将n张牌分别放到n个盒子中去，且每个盒子只能放一张牌，
一共有多少种不同的放法。*/

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
		return; //向上回退    
	}

	for (int i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			boxs[index] = i;
			book[i] = 1;
			//现在第i号牌已经被用了         
			//处理下一个盒子          
			Dfs(index + 1, n, boxs, book);
			//从下一个盒子回退到当前盒子，取出当前盒子的牌，尝试放入其它牌。      
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