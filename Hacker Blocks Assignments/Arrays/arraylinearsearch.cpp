#include<bits/stdc++.h>
using namespace std;

// int linearsearch(int arr[],int n,int target,int i){
//     // base case
//     if(i==n){
//         return -1;
//     }

//     // rec case
//     if(arr[i]==target){
//         return i; 
//     }
//     linearsearch(arr,n-1,target,i+1);

// }

int linearserch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int m;
    cin>>m;
	cout<<linearserch(arr,n,m);
	return 0;
}