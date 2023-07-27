#include<iostream>
using namespace std;

int twopointer(int arr[], int n,int key){
	int i =0;
	int j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==key)
			return 1;
			else if(arr[i]+arr[j]<key)
			i++;
			else
		j--;
	}
	return 0;
	}

int main(){
	int key;
	int a[5]={2,4 ,7, 8,9};
	
cout<<	(bool)twopointer(a,5,12)<<endl;
	return 0;
}
