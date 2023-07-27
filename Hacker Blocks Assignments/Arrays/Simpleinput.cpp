#include<iostream>
using namespace std;
int main(){
	int csum=0,index=0,i=0,arr[1000];
	while(i<=999){
		cin>>arr[i];
			if(csum<0){
			break;
		}
		csum=csum+arr[i];
		index=index+1;
		i++;
	}
	for(int j=0;j<=index-2;j++){
		cout<<arr[j]<<endl;
	}
	return 0;
}
