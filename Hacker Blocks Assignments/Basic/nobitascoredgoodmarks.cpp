#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x, n;
        cin>>x>>n;
        int each=x/n;
        int left=x-(x/n)*n;
        int next = n*(each+1);
        int borrow=next-x;
        int ans=min(left,borrow);
        cout<<ans<<endl;
    }
    
    return 0;
}
