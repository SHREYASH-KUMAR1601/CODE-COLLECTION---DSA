#include <iostream>
using namespace std;
void permutation(char inp[10000], int i)
{
    // base case
    if (inp[i] == '\0')
    {
        std::cout << inp << endl;
        return;
    }
    // rec case
    for (int j = i; inp[j] != '\0'; j++)
    {
        swap(inp[i], inp[j]);
        permutation(inp, i + 1);
    }
}
int main()
{
    char inp[10000] = {"abc"};
    permutation(inp, 0);

    return 0;
}