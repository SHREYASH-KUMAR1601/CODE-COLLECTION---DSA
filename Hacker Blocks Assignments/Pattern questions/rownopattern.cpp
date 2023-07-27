//1
//11
//202
//3003
//40004
#include <iostream>
using namespace std;
int main()
{
    int rowno = 2, trows;
    cout << "Enter no. of rows    ";
    cin >> trows;
    cout<<'1'<<endl;
    while (rowno <= trows)
    {
        cout << rowno-1;
        int i = 1;
        while (i <= rowno-2)
        {
            cout << '0';
            i = i + 1;
        }
        cout<<rowno-1<<endl;
        rowno = rowno + 1;
    }
    return 0;
}
