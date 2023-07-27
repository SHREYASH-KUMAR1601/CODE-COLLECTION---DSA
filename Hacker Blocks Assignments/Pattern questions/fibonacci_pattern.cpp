#include <iostream>
using namespace std;
int fib(int pos){
    if(pos==1 || pos==2){
        return pos-1;

    }

    return fib(pos-1)+fib(pos-2);
}

int main()
{
    int rowno = 1, trows;
    cin >> trows;
    int p=1;
    while (rowno <= trows)
    {
        int i = 1;
        
        while (i <= rowno)
        {
            cout << fib(p)<<" ";
            p++;
            i = i + 1;
        }
        cout << endl;
        rowno = rowno + 1;
    }

    return 0;
}