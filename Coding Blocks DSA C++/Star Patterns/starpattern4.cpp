// *****
//  ****
//   ***
//    **
//     *

#include <iostream>
using namespace std;
int main()
{
	int rowno = 1, trow;
	cout << "Enter no. of rows";
	cin >> trow;
	while (rowno <= trow)
	{

		int spac = 1;
		while (spac <= rowno - 1)
		{

			cout << ' ';
			spac = spac + 1;
		}
		int star = 1;
		while (star <= trow - rowno + 1)
		{
			cout << '*';
			star = star + 1;
		}

		cout << endl;
		rowno = rowno + 1;
	}

	return 0;
}
