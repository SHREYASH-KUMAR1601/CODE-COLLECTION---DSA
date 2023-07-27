#include <bits/stdc++.h>
using namespace std;
bool sortedornot(int arr[],int n,int i){
    // base case
    if(i==n-1){
        return true;
    }

    // rec case
    if(arr[i]<arr[i+1]){
        return sortedornot(arr,n,i+1);
    }
    
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    if(sortedornot(arr,n,0)==true){
        cout<<"true";
    }
    else cout<<"false";
    return 0;
}