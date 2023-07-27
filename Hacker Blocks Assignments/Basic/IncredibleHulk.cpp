#include <bits/stdc++.h>
using namespace std;
int minmoves(int n){
    // base case
    if(n==1){
        return 1;
    }

    // rec case
        int temp=0;
        int ans;
        for (int k = 0; k < n; k++)
        {
            temp=pow(2,k);
            if(temp>n){
                ans=temp/2;
                break;
            }
            else if(temp==n){
                return 1;
            }
        }

       int left= n-ans;
      return 1+minmoves(left);

}
int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin>>n;
        cout<<minmoves(n)<<endl;
    }
    
    return 0;
}