#include <iostream>
using namespace std;
int main()
{
    int rowno = 1, trows;
    cin >> trows;
    while (rowno <= trows)
    {
        for (int i = 1; i <= rowno; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        rowno++;
    }
    return 0;
}
