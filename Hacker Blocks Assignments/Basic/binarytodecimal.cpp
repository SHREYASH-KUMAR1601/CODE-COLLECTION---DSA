#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < n; j++){

    //binary conversion starts here
    int sum=0;
    int i=0;
    while(arr[j]!=0){  
        sum=sum+(arr[j]%10)*pow(2,i);
        i++;
        arr[j]=arr[j]/10;
    }
    // binary conversion ends here
    
    cout<<sum<<endl;
    }
   
    return 0;
}