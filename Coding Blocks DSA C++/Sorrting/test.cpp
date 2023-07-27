#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 7, 3, 5, 1};
    int tb = sizeof(arr) / sizeof(arr[0]);

    // bubble sort
    for (int i = 0; i < tb - 1; i++)
    {
        bool kyaswaphua = false;
        for (int j = 0; j < tb - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                kyaswaphua = true;
            }
        }
        if (kyaswaphua == false)
        {
            break;
        }
    }

    for (int k = 0; k < tb; k++)
    {
        cout << arr[k] << " ";
    }

    cout << endl;

    // selection sort

    for (int pos = 0; pos < tb - 1; pos++)
    {
        int min_index = pos;
        for (int j = pos + 1; j <= tb - 1; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[pos]);
    }
    for (int k = 0; k < tb; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    // insertion sort
    int i;
    for (i = 1; i <= tb - 1; i++)
    {
        int ele = arr[i];
        int j = i - 1;
        while (arr[j] > ele and j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = ele;
    }
    for (int k = 0; k < tb; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}