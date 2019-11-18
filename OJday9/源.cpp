/*
路径总数
*/

#include <iostream>
#include <vector>
using namespace std;

int fun(int m, int n)
{
	if (m < 1 || n < 1)
	{
		return 0;
	}
	vector<vector<int> > ret(m + 1, vector<int>(n + 1, 1));
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			ret[i + 1][j + 1] = ret[i][j + 1] + ret[i + 1][j];
		}
	}
	return ret[m][n];
}

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << fun(n, m) << endl;
	}
	return 0;
}


//递归
#include<iostream> 
using namespace std; 
int pathNum(int n,int m) 
{ 
	if(n > 1 && m > 1)
		//b情况，递归   
		return pathNum(n-1,m) + pathNum(n,m-1); 
	else if(((n >= 1)&&(m == 1))||((n == 1)&&(m >= 1)))
		// a情况，终止条件   
		return n + m; 
	else
		//格子为0时， 路径为0  
		return 0; 
} 

int main() 
{ 
	int n,m; 
	while(cin>>n>>m) 
	{
		cout<<pathNum(n,m)<<endl; 
	} return 0; 
} 