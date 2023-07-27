// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;
int main()
{
    int rowno = 1, trows;
    cout << "Enter no. of rows    ";
    cin >> trows;
    while (rowno <= trows)
    {
        int i = 1;
        while (i <= rowno)
        {
            cout << '*';
            i = i + 1;
        }
        cout << endl;
        rowno = rowno + 1;
    }

    return 0;
}