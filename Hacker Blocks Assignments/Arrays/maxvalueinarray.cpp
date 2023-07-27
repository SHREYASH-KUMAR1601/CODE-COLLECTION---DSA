#include<bits/stdc++.h>
using namespace std;
int maxofarray(int arr[],int n){
    int i=1;
    int max=arr[0];
    while(i<n){
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxofarray(arr,n);
    return 0;
}