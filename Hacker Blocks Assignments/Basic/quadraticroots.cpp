#include<iostream>
#include<cmath>
using namespace std;
void arrange(int d1, int d2){
		if (d1>=d2)
		{
			cout<<d2<<" "<<d1;
		}
		else{
		cout<<d1<<" "<<d2;
		}
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	signed int d;
	d=b*b-4*a*c;
	int d1,d2;
	d1=(-b+sqrt(d))/(2*a);
	d2=(-b-sqrt(d))/(2*a);
	if (d>0)
	{
		cout<<"Real and Distinct"<<endl;
		arrange(d1,d2);
	}
	else if(d==0){
		cout<<"Real and Equal"<<endl;
		arrange(d1,d2);
	}
	else
	{
		cout<<"Imaginary";
	}
	
	
	return 0;
}
