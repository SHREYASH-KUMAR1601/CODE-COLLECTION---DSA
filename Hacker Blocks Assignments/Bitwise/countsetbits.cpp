#include<bits/stdc++.h>
using namespace std;
int converttobinary(int n){
    int sum=0,i=0,count=0;
    while(n!=0){
        sum=sum+(n%2)*pow(10,i);
        if(n%2==1){
            count++;
        }
        i++;
        n=n/2;
    }
    return sum;
}
int countsetbits(int n){
    int count=0,i=0;
    while(n!=0){   
    if(n%2==1){
    count++;
    }
    i++;
    n=n/2;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
for (int i = 0; i < t; i++)
{
    int n;
    cin>>n;
    int temp=converttobinary(n);
    cout<<countsetbits(n)<<endl;
}

	return 0;
}