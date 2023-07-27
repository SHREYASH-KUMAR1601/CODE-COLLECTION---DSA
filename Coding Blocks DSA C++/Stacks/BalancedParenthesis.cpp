#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    int n = s.length();
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false; // Mismatched closing bracket
            }
        }
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false; // Mismatched closing bracket
            }
        }
        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false; // Mismatched closing bracket
            }
        }
    }
    return st.empty(); // Check if any opening brackets are left unmatched
}

int main()
{
    string s = "{[()]}";

    if (isValid(s))
    {
        cout << "Balanced Parenthesis" << endl;
    }
    else
    {
        cout << "Not Balanced or Invalid" << endl;
    }

    return 0;
}
