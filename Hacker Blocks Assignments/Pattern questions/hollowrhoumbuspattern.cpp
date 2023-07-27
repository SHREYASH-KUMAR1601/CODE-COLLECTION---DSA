#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	while(rowno<=n){
		int spc=1;
		while(spc<=n-rowno){
			cout<<" ";
			spc=spc+1;
		}
		if(rowno==1||rowno==n){
			int star=1;
			while(star<=n){
			
			cout<<"*";
			star=star+1;
			}
		}
		else{
			cout<<"*";
			int i=1;
			while(i<=n-2){
				cout<<" ";
				i=i+1;
			}
			cout<<"*";
		}
		cout<<endl;
		rowno=rowno+1;
	}
	
	return 0;
}
