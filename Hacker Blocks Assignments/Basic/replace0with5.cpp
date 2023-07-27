#include<iostream>
using namespace std;
	int main(){
	long long int rem,num=0;
	long long int n;
	cin>>n;
	if(n==0){
		cout<<5;
		return 0;
	}
	while(n>0){
		rem=n%10;
		if(rem==0){
			rem=5;
		}
		num=num*10+rem;
		n=n/10;
	}
	// reverse the num
long long int newnum=0;
	while(num>0){
		rem=num%10;
		newnum=newnum*10+rem;
		num=num/10;
	}
	cout<<newnum;
	return 0;
}
