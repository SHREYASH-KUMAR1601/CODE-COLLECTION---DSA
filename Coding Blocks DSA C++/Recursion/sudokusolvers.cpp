#include <iostream>
#include <cmath>
using namespace std;

bool canIplaceNumber(int mat[9][9], int i, int j, int n, int a)
{
	// horizontal check
	for (int k = 0; k < n; k++)
	{ // Use k as index variable instead of reusing j
		if (mat[i][k] == a)
		{
			return false;
		}
	}

	// vertical check
	for (int k = 0; k < n; k++)
	{ // Use k as index variable instead of reusing i
		if (mat[k][j] == a)
		{
			return false;
		}
	}

	// n*n check

	int sn = sqrt(n);
	int si = (i / sn) * sn;
	int sj = (j / sn) * sn;
	for (int k = si; k < si + sn; k++)
	{
		for (int l = sj; l < sj + sn; l++)
		{
			if (mat[k][l] == a)
			{
				return false;
			}
		}
	}

	return true;
}

bool sudokusolver(int mat[9][9], int i, int j, int n)
{

	// base case
	if (i == n)
	{
		for (int k = 0; k < n; k++)
		{
			for (int l = 0; l < n; l++)
			{
				cout << mat[k][l] << " ";
			}
			cout << endl;
		}
		return false; // Return false to keep finding all possible solutions
	}

	// rec case
	if (j == n)
	{
		return sudokusolver(mat, i + 1, 0, n);
	}
	if (mat[i][j] != 0)
	{
		return sudokusolver(mat, i, j + 1, n);
	}

	int a;
	for (a = 1; a <= n; a++)
	{
		if (canIplaceNumber(mat, i, j, n, a))
		{
			mat[i][j] = a;
			bool kyabakiseansmila = sudokusolver(mat, i, j + 1, n);
			if (kyabakiseansmila == true)
			{
				// Commented out: return true only when one solution is found
				// return true;

				// Instead, print the solution and continue searching for more
				for (int k = 0; k < n; k++)
				{
					for (int l = 0; l < n; l++)
					{
						cout << mat[k][l] << " ";
					}
					cout << endl;
				}
			}
			mat[i][j] = 0;
		}
	}

	return false;
}

int main()
{

	int mat[9][9] =
		{{5, 3, 0, 0, 7, 0, 0, 0, 0},
		 {6, 0, 0, 1, 9, 5, 0, 0, 0},
		 {0, 9, 8, 0, 0, 0, 0, 6, 0},
		 {8, 0, 0, 0, 6, 0, 0, 0, 3},
		 {4, 0, 0, 8, 0, 3, 0, 0, 1},
		 {7, 0, 0, 0, 2, 0, 0, 0, 6},
		 {0, 6, 0, 0, 0, 0, 2, 8, 0},
		 {0, 0, 0, 4, 1, 9, 0, 0, 5},
		 {0, 0, 0, 0, 8, 0, 0, 7, 9}};

	sudokusolver(mat, 0, 0, 9);

	return 0;
}
