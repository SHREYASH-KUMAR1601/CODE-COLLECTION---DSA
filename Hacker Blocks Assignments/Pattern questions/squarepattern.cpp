#include <iostream>
using namespace std;
int main()
{
    int s=1;
    int rowno = 1, trows;
    cin >> trows;
    while (rowno <= trows)
    {
        for (int i = 0; i < s; i++)
        {
            cout<<s<<" ";
        }
        
        for (int i = s+1; i <=trows-s+rowno; i++)
        {
            cout<<i<<" ";
        }
        
        s=s+1;
        cout<<endl;
        rowno++;
    }
    return 0;
}
