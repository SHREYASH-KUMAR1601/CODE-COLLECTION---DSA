#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(3);
    s.push(9);
    s.push(6);
    s.push(4);

    s.pop();
    s.pop();
    cout << s.top() << endl
         << s.size();

    return 0;
}