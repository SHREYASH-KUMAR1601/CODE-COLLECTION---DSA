#include <iostream>
using namespace std;
void subsequence(char inp[10000], int i, char out[10000], int j)
{
    // base case
    if (inp[i] == '\0')
    {
        out[j] = '\0';
        std::cout << out << endl;
        return;
    }

    // rec case
    //  with a
    out[j] = inp[i];
    subsequence(inp, i + 1, out, j + 1);

    // without a
    subsequence(inp, i + 1, out, j);
}
int main()
{
    char inp[10000] = {"abc"};
    char out[10000];
    subsequence(inp, 0, out, 0);

    return 0;
}