#include <iostream>
using namespace std;
int main()
{
	int arr[5] = {5, 2, 3, 1, 4};
	int n = sizeof(arr) / sizeof(int);
	for (int i = 1; i <= n - 1; i++)
	{
		int j = i - 1;
		int temp = arr[i];
		while (arr[j] > temp and j >= 0)
		{

			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	for (int i = 0; i <= n - 1; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
