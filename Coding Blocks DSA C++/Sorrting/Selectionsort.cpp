#include <iostream>
using namespace std;
int main()
{

	int arr[] = {2, 4, 8, 5, 1};
	int n = sizeof(arr) / sizeof(int);
	for (int pos = 0; pos <= n - 2; pos++)
	{
		int min_index = pos;
		for (int j = pos + 1; j <= n - 1; j++)
		{
			if (arr[j] <= arr[min_index])
			{
				min_index = j;
			}
		}
		swap(arr[min_index], arr[pos]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
