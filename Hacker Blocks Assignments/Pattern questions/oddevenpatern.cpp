//Take as input N, a number. Print the pattern like this.
//for N = 5
//5
//3
//1
//2
//4
#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	temp=n;
	if(n%2==1){
		int i=1;
		while(i<=(temp+1)/2){
			cout<<n<<endl;
			n=n-2;
			i=i+1;
		}
		int j=1;
		n=n+3;
		while(j<=(temp-1)/2){
			cout<<n<<endl;
			n=n+2;
			j=j+1;
		}
	}
	else{
		int i=1;
		n=n-1;
		while(i<=(temp)/2){
			cout<<n<<endl;
			n=n-2;
			i=i+1;
		}
		int j=1;
		n=n+3;
		while(j<=(temp)/2){
			cout<<n<<endl;
			n=n+2;
			j=j+1;
		}
	}
	
	return 0;
}
