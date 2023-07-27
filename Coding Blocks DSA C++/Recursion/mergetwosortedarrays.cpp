#include <iostream>
using namespace std;

void mergetwosortedarrays(int arr1[7], int m, int arr2[3], int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (i >= 0 and j >= 0)
    {
        if (arr2[j] < arr1[i])
        {
            arr1[k] = arr1[i];
            k--;
            i--;
        }
        else
        {
            arr1[k] = arr2[j];
            k--;
            j--;
        }
    }
    while (j >= 0)
    {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    for (int l = 0; l < m + n; l++)
    {
        cout << arr1[l] << " ";
    }
}
int main()
{
    int arr1[7] = {3, 4, 5, 6, 8};
    int m = 5;
    int arr2[3] = {0, 1, 7};
    int n = 3;
    mergetwosortedarrays(arr1, m, arr2, n);
    return 0;
}