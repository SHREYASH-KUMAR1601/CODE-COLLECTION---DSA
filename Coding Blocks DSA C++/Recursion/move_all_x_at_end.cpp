#include <iostream>
using namespace std;
string moveallxatend(string s)
{
    // base case
    if (s.length() == 0)
    {
        return s;
    }

    // rec case
    if (s[0] == 'x')
    {
        return moveallxatend(s.substr(1)) + s[0];
    }
    else
    {
        return s[0] + moveallxatend(s.substr(1));
    }
}
int main()
{
    string s;
    std::cin >> s;
    cout << moveallxatend(s) << endl;

    return 0;
}