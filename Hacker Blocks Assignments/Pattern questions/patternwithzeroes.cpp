#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	while (rowno <= n)
    {
    	cout<<rowno<<"\t";
    	if(rowno!=1){
        int i = 1;
        while (i <= rowno-2)
        {
            cout << '0'<<"\t";
            i = i + 1;
        }
        cout<<rowno<<"\t";
    }
        cout << endl;
        rowno = rowno + 1;
    }
	return 0;
}
