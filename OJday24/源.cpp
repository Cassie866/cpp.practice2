/*ÄêÖÕ½±*/
#include <iostream>
#include <vector>
using namespace std;
class Bonus
{
public:
	int getMost(vector<vector<int> > board)
	{
		for (int i = 1; i < 6; i++)
		{
			board[0][i] += board[0][i - 1];
			board[i][0] += board[i - 1][0];
		}
		for (int i = 1; i < 6; i++)
		{
			for (int j = 1; j < 6; j++)
			{
				if (board[i - 1][j] > board[i][j - 1])
				{
					board[i][j] += board[i - 1][j];
				}
				else
					board[i][j] += board[i][j - 1];
			}
		}
		return board[5][5];
	}
};