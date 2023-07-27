#include <iostream>
using namespace std;
int main()
{
    int s=0;
    int n;
    cin>>n;
    int rowno=1;
    while(rowno<=n){
        int temp=n;
        for (int i = 1; i <= rowno; i++)
        {
            cout<<temp<<" ";
            temp--;
        }
        
        
        for (int i = 0; i < 2*n-1-s; i++)
        {
            cout<<"  ";
            
        }
        s=s+2;
        
        temp++;

        for (int i = 0; i < rowno; i++)
        {
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
        rowno++;

    }
    // mid line 
    for (int i = n; i >= 0; i--)
    {
        cout<<i<<" ";
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // lower part
    int sn=1;
    rowno=1;
    while(rowno<=n){
        int temp=n;
        for (int i = 0; i < n-rowno+1; i++)
        {
            cout<<temp<<" ";
            temp--;
        }
        
        
        for (int i = 0; i < sn; i++)
        {
            cout<<"  ";
            
        }
        sn=sn+2;
        
        temp++;

        for (int i = 0; i < n-rowno+1; i++)
        {
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
        rowno++;

    }
    
    return 0;
}