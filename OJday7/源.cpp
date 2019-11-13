#include <iostream>
#include <string>
#include <stack>
using namespace std;


class Parenthesis
{
public:
	bool chkParenthesis(string A, int n)
	{
		stack<char> s;
		for (int i = 0; i < n; i++)
		{
			if (A[i] == '(')
				s.push(A[i]);
			if (A[i] == ')')
			{
				if (s.empty())
					return false;
				if (s.top() == '(')
					s.pop();
			}
		}
		if (s.empty())
			return true;
		else
			return false;
	}
};


class Parenthesis
{
public:
	bool chkParenthesis(string A, int n)
	{
		int a = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i] == '(')
				a++;
			if (A[i] == ')')
			{
				a--;
			}
		}
		if (a == 0)
			return true;
		else
			return false;
	}
};