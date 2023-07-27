#include<bits/stdc++.h>
using namespace std;

bool tripletsum(int arr[],int n,int target){
    sort(arr,arr+n);
    int lo,hi;
    for(int i=0;i<n;i++){
        lo=i+1;
        hi=n-1;
        int newtarget=target-arr[i];
        while(lo<hi){
            if(arr[lo]+arr[hi]==newtarget){
                cout<<arr[i]<<", "<<arr[lo]<<" and "<<arr[hi]<<endl;
                lo++;
                hi--;
                // return true;
            }
            else if(arr[lo]+arr[hi]>=newtarget){
                hi--;
            }
            else{
                lo++;
            }
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    tripletsum(arr,n,target);
    return 0;
}