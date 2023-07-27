#include<iostream>
using namespace std;
int main(){
	int s=1;
	int n;
	cin>>n;
	int rowno=1,j;
	while(rowno<=n){
		for (int i = 0; i <= n-rowno; i++)
		{
			cout<<"*"<<" ";
		}

		if(rowno!=1 ){
		for (int i = 1; i <= s; i++)
		{
			cout<<"  ";
		}
		s=s+2;
		}

		if(rowno==1){
		for (int i = 0; i <= n-rowno-1; i++)
		{
			cout<<"*"<<" ";
		}
		}
		else{
		for (int i = 0; i <= n-rowno; i++)
		{
			cout<<"*"<<" ";
		}
		}
		cout<<endl;
		rowno=rowno+1;
	}
	
	// lower pattern 
	s=s-4;
	rowno=1;
		while(rowno<=n-1){
		for (int i = 0; i <= rowno; i++)
		{
			cout<<"*"<<" ";
		}

		
		for (int i = 1; i <= s; i++)
		{
			cout<<"  ";
		}
		s=s-2;

		if(rowno==n-1){
		for (int i = 0; i <= rowno-1; i++)
		{
			cout<<"*"<<" ";
		}
		}
		else{
		for (int i = 0; i <= rowno; i++)
		{
			cout<<"*"<<" ";
		}
		}
		cout<<endl;
		rowno=rowno+1;
	}
	return 0;
}
