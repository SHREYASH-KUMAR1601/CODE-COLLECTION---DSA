#include <bits/stdc++.h>
using namespace std;

int maximumsubarraysum(int arr[], int n){
    int ans=INT_MIN;
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        ans=max(sum,ans);
        if(sum<0){
            sum=0;
        }
    }
    return ans;
}
int minimumsubarraysum(int arr[], int n){
    int ans=INT_MAX;
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        ans=min(sum,ans);
        if(sum>0){
            sum=0;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<maximumsubarraysum(arr,n)<<endl;
    cout<<minimumsubarraysum(arr,n)<<endl;
    int nonwrap=maximumsubarraysum(arr,n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        arr[i]=-arr[i];
    }
    cout<<sum<<endl;
    int minsubarraysum=maximumsubarraysum(arr,n);
    cout<<minsubarraysum<<endl;
    int wrapsum=sum-(-minsubarraysum);
    cout<<max(nonwrap,wrapsum);
    
    }
   
    return 0;
}