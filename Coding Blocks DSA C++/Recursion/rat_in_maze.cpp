#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int row = 4;
int col = 4;
int co = 0;
int sol[100][100] = {0};
bool rat_movement(char maze[][10], int sol[100][100], int i, int j) // i is pointing to row and j is pointing to col.
{
    // base case
    if (i == row - 1 and j == col - 1)
    {
        sol[i][j] = 1;
        for (int h = 0; h < row; h++)
        {
            for (int k = 0; k < col; k++)
            {
                cout << sol[h][k] << " ";
            }

            cout << endl;
        }
        cout << endl;
        sol[i][j] = 0;
        co++;
        return false;
    }

    // rec case

    // source and destination cannot be zero. So place 1 at source.
    sol[i][j] = 1;

    // check whether forward movement is possible           // forward movement is more preffered than downward movement
    if (j + 1 < col and maze[i][j + 1] != 'X')
    {                                                                 // j should not be the last column
        bool is_forward_possible = rat_movement(maze, sol, i, j + 1); // can a sol. be obtained by moving forward?
        if (is_forward_possible == true)
        {
            return true;
        }
    }

    // check for downward movement
    if (i + 1 < row and maze[i + 1][j] != 'X')
    {
        bool is_downward_possible = rat_movement(maze, sol, i + 1, j); // can a sol. be obtained by moving downward?
        if (is_downward_possible == true)
        {
            return true;
        }
    }

    sol[i][j] = 0;

    return false;
}
int main()
{
    char maze[][10] = {
        "0000",
        "00XX",
        "X000",
        "XX00"};

    // create a solution board and initialise it to 0.
    rat_movement(maze, sol, 0, 0);
    cout << "Total no. of paths :" << co << endl;
    return 0;
}