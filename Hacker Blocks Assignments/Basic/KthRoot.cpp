#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t; // number of test cases
    long long n, k;

    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        long long lo = 1, hi = pow(n, 1.0 / k), ans = -1;
        while (lo <= hi)
        {
            long long mid = (lo + hi) / 2;
            if (pow(mid, k) <= n)
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}