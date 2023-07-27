#include<iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	if(isupper(c)){
		cout<<"UPPERCASE";
	}
	else if(islower(c)){
		cout<<"LOWERCASE";
	}
	else(cout<<"some oher character");
	return 0;
}