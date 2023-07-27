#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int target){
    int lo=0,hi=n-1;
    while(lo<hi){
    int mid= (lo+hi)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        hi=mid-1;
    }
    else if(arr[mid]<target){
        lo=mid+1;
    }
    }
    
    return -1;
   
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    cout<<binarysearch(arr,n,m);
    return 0;
}