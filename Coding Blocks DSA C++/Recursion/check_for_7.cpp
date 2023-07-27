#include <iostream>
using namespace std;
bool is_7_present(int arr[], int n, int i)
{
    // base case
    if (i == n)
    {
        return false;
    }
    // rec case
    if (arr[i] == 7)
    {
        return true;
    }
    is_7_present(arr, n, i + 1);
}

int first_index_of_7(int arr[], int n, int i)
{
    // base case
    if (i == n)
    {
        return -1;
    }
    // rec case
    if (arr[i] == 7)
    {
        return i;
    }
    first_index_of_7(arr, n, i + 1);
}

int last_index_of_7(int arr[], int n, int i)
{
    // base case
    if (i == -1)
    {
        return -1;
    }
    // rec case
    if (arr[i] == 7)
    {
        return i;
    }
    last_index_of_7(arr, n, i - 1);
}

void all_indices_of_seven(int arr[], int n, int i)
{
    // base case
    if (i == n)
    {
        return;
    }
    // rec case
    if (arr[i] == 7)
    {
        std::cout << i << " ";
    }
    all_indices_of_seven(arr, n, i + 1);
}
int main()
{
    int arr[] = {3, 4, 7, 9, 7, 6, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (is_7_present(arr, n, 0))
    {
        std::cout << "Yes Present" << endl;
    }
    else
    {
        std::cout << "Not Present" << endl;
    }
    std::cout << "First Index Of Seven is:" << first_index_of_7(arr, n, 0) << endl;
    std::cout << "Last Index Of Seven is:" << last_index_of_7(arr, n, n - 1) << endl;
    std::cout << "All indices of 7 are:";
    all_indices_of_seven(arr, n, 0);
    return 0;
}