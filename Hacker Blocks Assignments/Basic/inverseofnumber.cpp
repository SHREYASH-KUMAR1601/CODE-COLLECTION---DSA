#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,i=1;
    while(n!=0){
        int temp=n%10;
        sum=sum+i*pow(10,(temp-1));
        n=n/10;
        i++;
    }

    cout<<sum<<endl;
	return 0;
}
