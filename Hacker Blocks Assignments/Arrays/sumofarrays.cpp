#include <iostream>
using namespace std;

void sumOfArrays(int arr1[], int n, int arr2[], int m)
{
    int temp[1000];
    int i = n - 1;
    int j = m - 1;
    int k = max(n, m) - 1;
    int carry = 0;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += arr1[i];
        }
        if (j >= 0)
        {
            sum += arr2[j];
        }
        temp[k] = sum % 10; // Add least significant digit to temp array
        carry = sum / 10;   // Update carry for next iteration
        i--;
        j--;
        k--;
    }
    if (carry != 0)
    {                         // If carry is left after all additions
        cout << carry << " "; // Print the carry
    }
    for (int i = 0; i <= max(n, m) - 1; i++)
    {
        cout << temp[i] << " "; // Print the temp array elements
    }
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sumOfArrays(arr1, n, arr2, m);
    return 0;
}