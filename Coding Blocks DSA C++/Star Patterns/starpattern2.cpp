//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;
int main()
{
    int rowno = 1, trow;
    cout << "Please enter no. of rows" << endl;
    cin >> trow;
    while (rowno <= trow)
    {

        int space = 1;
        while (space <= trow - rowno)
        {
            cout << ' ';
            space = space + 1;
        }
        int star = 1;
        while (star <= rowno)
        {
            cout << '*';
            star = star + 1;
        }
        cout << endl;
        rowno = rowno + 1;
    }

    return 0;
}