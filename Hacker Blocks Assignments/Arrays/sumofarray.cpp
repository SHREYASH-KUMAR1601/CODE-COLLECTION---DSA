#include<iostream>
using namespace std;
	int main(){
	int n,m,sum;
	cin>>n;
	int arr1[n];
	for(int i=0;i<=n-1;i++){
		cin>>arr1[i];
	}
	cin>>m;
	int arr2[m];
	for(int i=0;i<=m-1;i++){
		cin>>arr2[i];
	}
	int carry=0,arr3[n];
	if(n>m){
	for(int i=n-1,j=m-1;i>=0 and j>=0;i--,j--){
			if(i<n-m){
				arr3[i]=arr1[i]+carry;
			}
		else{
		arr3[i]=arr1[i]+arr2[j]+carry;
	}
		if(arr3[i]>9){
			carry=1;
			arr3[i]=arr3[i]%10;
		}
	}
}
	for(int i=0;i<=n-1;i++){
		cout<<arr3[i]<<",";
	}
	cout<<"END";
	return 0;
}

