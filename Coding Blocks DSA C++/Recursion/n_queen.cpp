#include <iostream>
using namespace std;
int sol[100][100] = {0};
int count = 0;
bool can_i_place_queen(int sol[100][100], int i, int j, int n)
{
    // horizontal check
    for (int k = 0; k < n; k++)
    {
        if (sol[i][k] == 1)
        {
            return false;
        }
    }

    // vertical check
    for (int k = 0; k < n; k++)
    {
        if (sol[k][j] == 1)
        {
            return false;
        }
    }

    // diagonal check
    int r = i, s = j;
    while (r >= 0 and s < n)
    { // right diagonal check
        if (sol[r][s] == 1)
        {
            return false;
        }
        r--;
        s++;
    }

    r = i;
    s = j;
    while (r >= 0 and s >= 0)
    { // left diaggonal check
        if (sol[r][s] == 1)
        {
            return false;
        }
        r--;
        s--;
    }

    return true;
}
bool nqueen(int sol[100][100], int i, int n)
{
    // base case: All queens have been placed
    if (i == n)
    {
        for (int k = 0; k < n; k++) // print solution
        {
            for (int h = 0; h < n; h++)
            {
                if (sol[k][h] == 1)
                {
                    cout << "Q"
                         << " ";
                }
                else
                {
                    cout << "-"
                         << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
        count++;
        return false;
    }
    // rec case
    // Try placing a queen in each column of the current row
    for (int j = 0; j < n; j++)
    {
        if (can_i_place_queen(sol, i, j, n) == true)
        {
            sol[i][j] = 1;
            // can a queen be placed in the next row? check-->
            bool is_a_solution_possible = nqueen(sol, i + 1, n);
            if (is_a_solution_possible == true)
            {
                return true;
            }
            // Backtrack: remove the queen from the current cell
            sol[i][j] = 0;
        }
    }
    // If no queen can be placed in the current row, return false
    return false;
}
int main()
{
    nqueen(sol, 0, 5);
    cout << "Total no of possible ways :" << count << endl;

    return 0;
}