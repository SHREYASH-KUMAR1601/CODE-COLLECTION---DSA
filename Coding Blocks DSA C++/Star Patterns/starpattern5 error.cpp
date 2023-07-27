// *****
//  ***
//   *
//  ***
// *****
// odd no. of  rows
#include <iostream>
using namespace std;
int main()
{
	int trows, rowno = 1;
	cout << "Enter total no. of rows";
	cin >> trows;
	while (rowno <= (trows + 1) / 2)
	{
		int space = 1;
		while (space <= (rowno - 1))
		{
			cout << ' ';
			space = space + 1;
		}
		int star = 1;
		while (star <= (2 * (trows - rowno) - (trows + 1) / 2))
		{
			cout << '*';
			star = star + 1;
		}
		cout << endl;
		rowno = rowno + 1;
	}
	rowno = ((trows+1)/2)+1;
	while (rowno <= trows)
	{
		int space = 1;
		while (space <= trows - rowno)
		{
			cout << ' ';
			space = space + 1;
		}
		int star = 1;
		while (star <= 2 * rowno - trows)
		{
			cout << '*';
			star = star + 1;
		}
		cout << endl;
		rowno = rowno + 1;
	}

	return 0;
}
