#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int sumo=0,sume=0,count=0,rem,i=0,arr[50];
	while(n!=0 and i>=0){
		rem=n%10;
		n=n/10;
		count=count+1;
		arr[i]=rem;
		i++;
	}
	for(i=0;i<=count-1;i=i+2){
		sume=sume+arr[i];
	}
		for(i=1;i<=count-1;i=i+2){
		sumo=sumo+arr[i];
	}
	cout<<sumo<<endl<<sume<<endl;
	return 0;
}
