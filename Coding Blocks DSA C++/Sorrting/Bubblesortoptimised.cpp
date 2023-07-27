#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i <= 9; i++)
	{
		cin >> arr[i];
	}
	int n = sizeof(arr) / sizeof(int);
	for (int j = 0; j < n - 1; j++)
	{
		bool isswapped = false;
		for (int i = 0; i <= n - 2 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				isswapped = true;
			}
		}
		if (isswapped == false)
		{
			break;
		}
	}
	for (int k = 0; k < n; k++)
	{
		cout << arr[k] << " ";
	}
	return 0;
}
