#include <iostream>
using namespace std;
void Tower_of_hanoi(int n, char src, char helper, char dest)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // rec case
    Tower_of_hanoi(n - 1, src, dest, helper);
    cout << "Move disk no. " << n << " from " << src << " to " << dest << endl;
    Tower_of_hanoi(n - 1, helper, src, dest);
}
int main()
{
    int n;
    cin >> n;
    Tower_of_hanoi(n, 'A', 'B', 'C');
    return 0;
}