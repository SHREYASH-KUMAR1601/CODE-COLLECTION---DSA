#include <iostream>
using namespace std;

int string_to_int(string s, int n)
{ //"2048"
    // base case
    if (n == 0)
    {
        return 0;
    }
    // rec case
    int ldigit = s[n - 1] - '0';
    return string_to_int(s, n - 1) * 10 + ldigit;
}
int main()
{
    string s = "2048";
    int n = s.length();
    std::cout << string_to_int(s, n) + 2 << endl;
    return 0;
}