#include<iostream>
using namespace std;
	int main(){
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<=n-1;i++){
		cin>>arr1[i];
	}
	for(int i=n-1;i>=0;i--){
		cout<<arr1[i]<<endl;
	}
	
	return 0;
}

