#include<iostream>
using namespace std;
int main(){
	int n,remainder,revno=0;
	cin>>n;
	while(n!=0){
		remainder=n%10;
	//	revno=revno*10+remainder;    to calculate reversed no.
		cout<<remainder;
		n=n/10;
	}
	return 0;
}
