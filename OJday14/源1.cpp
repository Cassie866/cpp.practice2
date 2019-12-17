/*авдЫДќзг*/

#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];	
	}
	return sum;
}

int mut(vector<int> v)
{
	int mut = 0;
	for (int i = 0; i < v.size(); i++)
	{
		mut *= v[i];
	}
	return mut;
}

int main()
{
	int n = 0, kinds = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n; i++)
	{
		int temp = v[i];
		v[i] = 1;
		if (sum(v) - 1 > mutilation(v))
		{
			kinds++;
		}
		v[i] = temp;
	}
	cout << kinds;
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	return sum;
}

int mut(vector<int> v)
{
	int mut = 0;
	for (int i = 0; i < v.size(); i++)
	{
		mut *= v[i];
	}
	return mut;
}

int main()
{
	int n = 0, kinds = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}


	cout << kinds;
	return 0;
}