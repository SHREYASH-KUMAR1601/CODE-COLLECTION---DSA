#include <bits/stdc++.h>
using namespace std;
int gcd(int n, int m){
    int smaller=min(n,m);
    int greater=max(n,m);
    int max=1;
    for(int i=2;i<=smaller;i++){
        if(n%i==0 and m%i==0){
            max=i;
        }
    }
    return max;
}
int main()
{
    int n,m;
    cin >> n >> m;
    cout<<gcd(n,m)<<endl;
}