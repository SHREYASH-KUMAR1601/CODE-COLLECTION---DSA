#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rowno = 1;
	while (rowno <= n)
	{
		int no = 1;
		while (no <= n - rowno + 1)
		{
			cout << no<<" ";
			no = no + 1;
		}
		int star = 1;
		if (rowno != 1)
		{
			while (star <= 2 * rowno - 3)
			{
				cout << "*"<<" ";
				star = star + 1;
			}
		}

		cout << endl;
		rowno = rowno + 1;
	}

	return 0;
}
