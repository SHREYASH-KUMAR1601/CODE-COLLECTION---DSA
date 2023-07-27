// program for even or odd rows star pattern
// starpattern 7 + starpattern 8
#include <iostream>
using namespace std;
int main()
{
	int trows;
	cout << "Enter no of rows";
	cin >> trows;
	if (trows % 2 == 0)
	{
		int rowno = 1;
		while (rowno <= trows / 2)
		{
			int spc = 1;
			while (spc <= (trows) / 2 - rowno)
			{
				cout << ' ';
				spc = spc + 1;
			}
			int stc = 1;
			while (stc <= 2 * rowno - 1)
			{
				cout << '*';
				stc = stc + 1;
			}
			cout << endl;
			rowno = rowno + 1;
		}
		rowno = 1;
		while (rowno <= trows / 2)
		{
			int spc = 1;
			while (spc <= rowno - 1)
			{
				cout << ' ';
				spc = spc + 1;
			}
			int stc = 1;
			while (stc <= 2 * (trows - rowno) - (trows - 1))
			{
				cout << '*';
				stc = stc + 1;
			}
			cout << endl;
			rowno = rowno + 1;
		}
	}

	else
	{
		int rowno = 1;
		while (rowno <= (trows + 1) / 2)
		{
			int spc = 1;
			while (spc <= (trows + 1) / 2 - rowno)
			{
				cout << " ";
				spc = spc + 1;
			}
			int stc = 1;
			while (stc <= 2 * (rowno)-1)
			{
				cout << '*';
				stc = stc + 1;
			}
			cout << endl;
			rowno = rowno + 1;
		}
		rowno = 1;
		while (rowno <= (trows - 1) / 2)
		{
			int spc = 1;
			while (spc <= rowno)
			{
				cout << ' ';
				spc = spc + 1;
			}
			int stc = 1;
			while (stc <= 2 * (trows - rowno) - trows)
			{
				cout << '*';
				stc = stc + 1;
			}
			cout << endl;
			rowno = rowno + 1;
		}
	}
	return 0;
}
