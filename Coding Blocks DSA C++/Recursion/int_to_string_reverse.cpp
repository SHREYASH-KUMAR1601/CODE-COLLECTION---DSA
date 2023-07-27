#include <iostream>
using namespace std;
string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void int_to_string(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // rec case
    int indx = n % 10;
    int_to_string(n / 10);
    cout << arr[indx] << " ";
}
void revinttostring(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // rec case
    int a = (n % 10);
    cout << arr[a] << " ";
    revinttostring(n / 10);
}
int main()
{
    int_to_string(2048);

    return 0;
}