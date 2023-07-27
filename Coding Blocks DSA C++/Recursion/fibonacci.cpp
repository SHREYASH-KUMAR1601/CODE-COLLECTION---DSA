#include <iostream>
using namespace std;
int fib(int n)
{

	// base case
	if (n == 1 || n == 2)
	{
		return n - 1;
	}

	// recursive case
	int fans = fib(n - 1) + fib(n - 2);
	return fans;
	cout << fans << " ";
}
int main()
{
	int pos;

	cin >> pos;
	cout << 0 << " " << 1 << " ";
	cout << fib(pos);
	return 0;
}
