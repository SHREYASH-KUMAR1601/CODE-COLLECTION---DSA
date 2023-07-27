#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	while(rowno<=n){
		int i=1;
		while(i<=rowno){
			cout<<i<<"\t";
			i=i+1;
		}
		int spc=1;
		while(spc<=2*(n-rowno)-1){
			cout<<" "<<"\t";
			spc=spc+1;
		}
		
		if(rowno!=n){
			int j=1,temp=rowno;
			while(j<=rowno){
			cout<<temp<<"\t";
			j=j+1;
			temp=temp-1;
		}
		}
		else{
		
		int j=1,temp=rowno;
		while(j<=n-1){
		
		cout<<temp-1<<"\t";
		j=j+1;
		temp=temp-1;
	}
}
		cout<<endl;
		rowno=rowno+1;
	}
	
	
	return 0;
}
