#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    // Find maximum element in the array
    int max_ele = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_ele)
        {
            max_ele = arr[i];
        }
    }

    // Create count array and initialize with all zeros
    int count[max_ele + 1] = {0};

    // Store count of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Modify the count array by adding earlier counts
    for (int i = 1; i <= max_ele; i++)
    {
        count[i] += count[i - 1];
    }

    // Create a temporary array to store the sorted output
    int temp[n];

    // Build the sorted array
    for (int i = n - 1; i >= 0; i--)
    {
        temp[count[arr[i]] - 1] = arr[i];  // Since Indices Start from zero
        count[arr[i]]--;
    }

    // Copy the sorted elements from temporary array into the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}