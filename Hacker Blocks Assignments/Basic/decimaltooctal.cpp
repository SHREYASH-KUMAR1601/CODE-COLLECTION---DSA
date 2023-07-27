#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum=0;
    int i=0;
    while(n!=0){  
        sum=sum+(n%8)*pow(10,i);
        i++;
        n=n/8;
    }
    cout<<sum<<endl;
    return 0;
}