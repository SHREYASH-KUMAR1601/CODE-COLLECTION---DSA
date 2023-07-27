#include <iostream>
using namespace std;
int sol[100][100] = {0};
int co = 0;
bool ratinamaze(char maze[][10], int row, int col, int i, int j)
{
	// base case
	if (i == row - 1 && j == col - 1)
	{
		sol[i][j] = 1;
		for (int l = 0; l < row; l++)
		{
			for (int k = 0; k < col; k++)
			{
				cout << sol[l][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
		// return true;
		co++;

		sol[i][j] = 0;
		// return true

		return false; // all paths
	}

	// recursive case

	sol[i][j] = 1;
	// kya mai right jaa sakti hun
	if (j + 1 < col && maze[i][j + 1] != 'X')
	{
		// mai aage jaa sakti hun
		bool kyamujheaageseansmila = ratinamaze(maze, row, col, i, j + 1);
		if (kyamujheaageseansmila == true)
		{
			return true;
		}
	}

	// kya mai neeche jaa sakti hun
	if (i + 1 < row && maze[i + 1][j] != 'X')
	{
		bool kyamujheneecheseaNSMILA = ratinamaze(maze, row, col, i + 1, j);
		if (kyamujheneecheseaNSMILA == true)
		{
			return true;
		}
	}

	sol[i][j] = 0; // backtracking

	return false;
}

int main()
{

	char maze[][10] = {
		"OOOO",
		"OOXX",
		"X0OO",
		"XXXO"};
	int row = 4, col = 4;

	ratinamaze(maze, row, col, 0, 0);

	cout << "Total paths: " << co << endl;

	return 0;
}
