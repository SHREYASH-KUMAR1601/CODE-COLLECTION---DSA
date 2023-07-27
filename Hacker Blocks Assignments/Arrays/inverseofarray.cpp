#include<bits/stdc++.h>
using namespace std;

void inverse(int arr[],int n,int temp[], int j){
    // base case
    if(j==n){
        return;
    }

    // rec case
    temp[arr[j]]=j;
    inverse(arr,n,temp,j+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int temp[n]={0};

    // Iterative Approach-->

    // for (int i = 0; i < n; i++)
    // {
    //     temp[arr[i]]=i;
    // }

    
    inverse(arr,n,temp,0);
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
	return 0;
}
