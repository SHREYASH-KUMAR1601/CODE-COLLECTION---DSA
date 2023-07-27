#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min;
    cin >> min;
    int max;
    cin >> max;
    int step;
    cin>>step;
    int F=min;
    for(F=min;F<=max;F=F+step){
        int celsius=(5.0/9.0)*(F - 32);
        cout<<F<<"  "<<celsius<<endl;
    }
    
    return 0;
}