#include <iostream>
using namespace std;
int main()
{
    int rowno = 1, trows;
    cin >> trows;
    while (rowno <= trows)
    {
        for (int i = 1; i <= trows-rowno; i++)
        {
            cout<<"  ";
        }
        for (int i = 0; i < rowno; i++)
        {
            cout<<"*"<<" ";
        }
        
        cout<<endl;
        rowno++;
    }
    return 0;
}
