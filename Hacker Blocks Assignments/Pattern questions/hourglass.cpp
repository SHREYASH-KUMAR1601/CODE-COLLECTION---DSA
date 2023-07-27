#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int rowno=1;
   while(rowno<=n+1){

        for (int i = 0; i < rowno-1; i++)
        {
            cout<<"  ";
        }
        
    
        for (int i = temp; i >=0; i--)
        {
            cout<<i<<" ";
        }
        for (int i = 1; i <=temp; i++)
        {
            cout<<i<<" ";
        }
        temp--;

        cout<<endl;
        rowno++;
   }

   // lower part
   rowno=1;
   temp=1;
   while(rowno<=n){
    for (int i = 0; i < n-rowno; i++)
    {
        cout<<"  ";
    }

    for (int i = temp; i >=0 ; i--)
    {
        cout<<i<<" ";
    }
    
    for (int i = 1; i <= rowno; i++)
    {
        cout<<i<<" ";
    }
    temp++;
    cout<<endl;
    rowno++;
    
   }
    return 0;
}