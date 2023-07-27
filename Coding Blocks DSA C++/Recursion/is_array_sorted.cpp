#include <iostream>
using namespace std;

bool sort_check(int arr[], int n, int i)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }

    // rec case
    if (arr[i] < arr[i + 1])
    {
        return sort_check(arr, n, i + 1);
    }
    return false;
}
int main()
{
    int arr[] = {2, 5, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (sort_check(arr, n, 0))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}