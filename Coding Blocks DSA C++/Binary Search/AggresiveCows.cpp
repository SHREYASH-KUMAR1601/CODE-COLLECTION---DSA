#include <iostream>
#include <algorithm>

using namespace std;

bool canplacecows(int arr[], int n, int k, int dist)
{
	int coord = arr[0];
	int count = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] - coord >= dist)
		{
			count++;
			coord = arr[i];
		}
		if (count == k)
		{
			return true;
		}
	}
	return false;
}

int mindistance(int arr[], int n, int k)
{
	sort(arr, arr + n);
	int low = 1;
	int res = -1;
	int high = arr[n - 1] - arr[0];
	while (low <= high)
	{
		int mid = low + (high-low) / 2;
		if (canplacecows(arr, n, k, mid))
		{
			res = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	return res;
}

int main()
{
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "The largest minimum distance is :" << mindistance(arr, n, k);
	return 0;
}
