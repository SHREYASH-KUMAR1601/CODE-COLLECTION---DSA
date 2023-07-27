#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int ser=0,count=0;
	for(int i=1;1;i++){
		ser=3*i+2;
		if(ser%n2!=0){
			cout<<ser<<endl;
			count=count+1;
		}
		if(count==n1){
			return 0;
		}
	}
	
	return 0;
}
