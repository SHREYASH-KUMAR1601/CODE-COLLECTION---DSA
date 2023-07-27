#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    // base case
    if(n==0||n==1){
        return n;
    }
    if(n==2){
        return 1;
    }

    // rec case
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}