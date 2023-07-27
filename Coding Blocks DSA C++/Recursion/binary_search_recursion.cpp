#include <iostream>
using namespace std;
int binary_search_index(int arr[], int start, int end, int key)
{
    // base case
    if (start > end)
    {
        return -1;
    }
    // rec case
    int mid = (start + end) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] < key)
    {
        return binary_search_index(arr, mid + 1, end, key);
    }
    if (arr[mid] > key)
    {
        return binary_search_index(arr, start, mid - 1, key);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    int a = binary_search_index(arr, 0, n, 4);
    if (a == -1)
    {
        std::cout << "Key not present" << endl;
    }
    else
    {
        std::cout << "Key is present at index:" << a << endl;
    }
    return 0;
}