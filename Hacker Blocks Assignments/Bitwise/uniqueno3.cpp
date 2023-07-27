#include <iostream>
using namespace std;
const int MAX_SIZE = 100000; // add a constant for the array size

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n]; // use dynamic memory allocation
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp[MAX_SIZE] = {0};
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (arr[i] > 0)
        { // fix indexing from j to i
            int last_bit = (arr[i] & 1);
            temp[j] = temp[j] + last_bit;
            arr[i] = arr[i] >> 1;
            j++;
        }
    }
    int p = 1;
    int ans = 0;
    for (int i = 0; i < MAX_SIZE; i++) // iterate over the entire array
    {
        temp[i] = temp[i] % 3;
        ans = ans + temp[i] * p;
        p = p << 1;
    }

    cout << ans << endl;

    delete[] arr; // free the dynamically allocated memory

    return 0;
}