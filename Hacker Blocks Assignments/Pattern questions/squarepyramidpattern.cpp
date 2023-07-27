#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowno = 1, trows;
    cin >> trows;
    while (rowno <= trows)
    {
        for (int i = 1; i <= rowno; i++)
        {
            cout<<pow(i,2)<<" ";
        }
        cout<<endl;
        rowno++;
    }
    return 0;
}
