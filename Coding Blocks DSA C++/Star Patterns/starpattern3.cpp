// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;
int main()
{
	int rowno = 1, trows;
	cout << "enter total no. of rows";
	cin >> trows;
	while (rowno <= trows)
	{

		int space = 1;
		while (space <= rowno - 1)
		{

			cout << ' ';
			space = space + 1;
		}

		int star = 1;
		while (star <= (2 * (trows - rowno) + 1))
		{

			cout << '*';
			star = star + 1;
		}

		cout << endl;
		rowno = rowno + 1;
	}

	return 0;
}
