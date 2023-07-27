#include <iostream>
using namespace std;
void dec_print(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // rec case
    cout << n << " ";
    dec_print(n - 1);
}
int main()
{
    int n = 8;
    dec_print(n);

    return 0;
}