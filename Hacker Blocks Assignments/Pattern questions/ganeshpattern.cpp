// odd no. of rows only

#include<iostream>
using namespace std;
int main(){
	
	int trows;
	cin>>trows;
	// row 1
	cout<<'*';
	int sp=1;
	while(sp<=((trows-1)/2)-1){
		cout<<' ';
		sp=sp+1;
	}
	int st=1;
	while(st<=(trows+1)/2){
		cout<<'*';
		st=st+1;
	}
	cout<<endl;
	//row no 2 and 3
	int i=1;
	while(i<=((trows-1)/2)-1){
		cout<<'*';
		int spc=1;
		while(spc<=((trows-1)/2)-1){
			cout<<' ';
			spc=spc+1;
		}
		cout<<'*';
		i=i+1;
		cout<<endl;
	}
	
	//row 4
	int sta=1;
	while(sta<=trows){
		cout<<'*';
		sta=sta+1;
	}
	cout<<endl;
	//row 5 and 6
	int j=1;
	while(j<=((trows-1)/2)-1){
		int spa=1;
		while(spa<=(trows-1)/2){
			cout<<' ';
			spa=spa+1;
		}
		cout<<'*';
		int sta=1;
		while(sta<=((trows-1)/2)-1){
			cout<<' ';
			sta=sta+1;
		}
		cout<<'*'<<endl;
		j=j+1;
	}
	//row 7
	int star=1;
	while(star<=(trows+1)/2){
		cout<<'*';
		star=star+1;
	}
	int spac=1;
	while(spac<=((trows-1)/2)-1){
		cout<<' ';
		spac=spac+1;
	}
	cout<<"*"<<endl;
	
	return 0;
}
