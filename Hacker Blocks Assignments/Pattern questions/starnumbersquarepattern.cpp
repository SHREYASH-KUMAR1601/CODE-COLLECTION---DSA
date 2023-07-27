#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rowno=1;
	while(rowno<=n){
		int i=1;
		while(i<=rowno){
			cout<<i;
			i=i+1;
		}
		int star=1;
		while(star<=n-rowno){
			cout<<"*";
			star=star+1;
		}
		rowno=rowno+1;
		cout<<endl;
	}

	return 0;
}
