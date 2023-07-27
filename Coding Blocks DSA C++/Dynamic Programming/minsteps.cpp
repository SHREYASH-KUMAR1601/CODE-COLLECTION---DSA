#include<bits/stdc++.h>
using namespace std;

int minstepstoreach1(int n){
    // base case
    if(n==1){
        return 0;
    }

    // rec case
    int x,y,z;
    x=y=z=INT_MAX;
    x=minstepstoreach1(n-1);
    if(n%2==0){
    y=minstepstoreach1(n/2);
    }
    if(n%3==0){
    z=minstepstoreach1(n/3);
    }
    return min(x,min(y,z))+1;
}


int tdminstepstoreach1(int n,int *arr){
    // base case
    if(n==1){
        return arr[n]=0;
    }

    if(arr[n]!=-1){
        return arr[n];
    }
    // rec case
    int x,y,z;
    x=y=z=INT_MAX;
    x=tdminstepstoreach1(n-1,arr);
    if(n%2==0){
    y=tdminstepstoreach1(n/2,arr);
    }
    if(n%3==0){
    z=tdminstepstoreach1(n/3,arr);
    }
    return arr[n]=min(x,min(y,z))+1;
}

int bottomupminsteps(int n, int*arr){
    arr[1]=0;

    for(int i=2;i<=n;i++){
    int x,y,z;
    x=y=z=INT_MAX;
    x=arr[i-1];
    if(i%2==0){
        y=arr[i/2];
    }
    if(i%3==0){
        z=arr[i/3];
    }
    arr[n]=min(x,min(y,z))+1;
    }

    return arr[n];
}
int main(){

    int n;
    cin>>n;
    int*arr=new int[n+1];
    for (int i = 0; i <= n; i++)
    {
        arr[i]=-1;
    }
    
    cout<<"Simple rec sol."<<minstepstoreach1(n)<<endl;
    cout<<"Top down sol."<<tdminstepstoreach1(n,arr)<<endl;
    cout<<"Bottom Up sol."<<bottomupminsteps(n,arr)<<endl;
    return 0;
}