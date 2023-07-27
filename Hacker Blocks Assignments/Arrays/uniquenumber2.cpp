#include<bits/stdc++.h>
using namespace std;

int main () {
 
   int n;
   cin >> n;
   int ans=0;
   int arr[n];

   for (int i = 0 ; i < n ; i++){
       cin >> arr[i];
       ans=ans^arr[i];
   }
   //ans=x^y
    int temp = ans;
    int pos=0;
    while((temp&1)!=1){
        pos++;
        temp=temp>>1;       
    }
    int mask=1<<pos;
    int x=0;
    int y=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]&mask>0)
        {
            x=x^arr[i];
        }
        
    }
    
    y=ans^x;

cout<<min(x,y)<<" "<<max(x,y)<<endl;
    return 0;
}