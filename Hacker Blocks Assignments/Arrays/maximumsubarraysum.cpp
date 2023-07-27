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
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<maximumsubarraysum(arr,n);
    return 0;
}