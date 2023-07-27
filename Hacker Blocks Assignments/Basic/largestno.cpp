#include<iostream>
using namespace std;
int main(){
		int n;
		cin>>n;
		int largest =n;
	for(int i=1;i<=2;i++){
		int n;
		cin>>n;
		if(n>largest){
			largest=n;
		}
	}
	cout<<largest;
	return 0;
}
