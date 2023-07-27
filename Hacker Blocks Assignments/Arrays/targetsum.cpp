#include<bits/stdc++.h>
using namespace std;
void targetSum(int arr[], int n, int target)
{
    sort(arr,arr+n);
    int s = 0;
    int e = n - 1;
    
    while(s<e){
        if(arr[s]+arr[e]==target){
            cout<<arr[s]<<" and "<<arr[e]<<endl;
            s++;
            e--;
        }
        else if(arr[s]+arr[e]>target){
            e--;
        }
        else{
            s++;
        }

    }

}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	targetSum(arr,n,x);
	return 0;
}