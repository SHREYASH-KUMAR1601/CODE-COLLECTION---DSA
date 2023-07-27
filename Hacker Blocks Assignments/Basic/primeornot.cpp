#include <bits/stdc++.h>
using namespace std;
bool primeornot(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(primeornot(n)==true){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}