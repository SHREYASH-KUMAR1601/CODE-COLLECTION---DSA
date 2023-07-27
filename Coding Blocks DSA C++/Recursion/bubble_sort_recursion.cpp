#include <iostream>
using namespace std;

// void bubble_sort(int arr[], int n, int i)
// {
//     // base case
//     if (i == n - 1)
//     {
//         return;
//     }
//     // rec case
//     for (int j = 0; j <= n - 2 - i; j++)
//     {
//         if (arr[j] > arr[j + 1])
//         {
//             swap(arr[j], arr[j + 1]);
//         }
//     }
//     bubble_sort(arr, n, i + 1);
// }

// pure recursive solution
void bubble_sort(int arr[], int n, int i, int j)
{
    // base case
    if (i == n - 1)
    {
        return;
    }
    // rec case
    if (j == n - i - 1)
    {
        bubble_sort(arr, n, i + 1, 0);
    }
    else
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
        bubble_sort(arr, n, i, j + 1);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n, 0, 0);
    return 0;
}