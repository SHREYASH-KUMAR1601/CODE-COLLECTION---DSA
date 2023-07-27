#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}
int inverse(int arr[],int n){
	int sum=0;
    for(int i=0;i<n;i++){
      sum=sum+i*pow(10,arr[i]);
    }
    return sum;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<inverse(arr,n);
	return 0;
}