#include <iostream>
using namespace std;
int main()
{
    int p, r, t, si;
    cout << "enter value of p,r,t" << '\n';
    cin >> p >> r >> t;
    si = p * r * t / 100;
    cout << "si=" << si << '\n';
    return 0;
}