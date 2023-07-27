#include<bits/stdc++.h>
using namespace std;
int simplerec(int n){               // O(2^n)
    // base case
    if(n==0||n==1){
        return n;
    }
    // rec case
    return simplerec(n-1)+simplerec(n-2);
}
int fibodp(int n,int*arr){
    // base case                       //return karne se pehle store
    if(n==0||n==1){                   //calculate karne se pehle check
        return arr[n]=n;
    }
    if(arr[n]!=-1){                     // top down approach is recursive  O(2n)
        return arr[n];                  // bottom up approach is iterative O(n)
    }
    // rec case
    return arr[n]=fibodp(n-1,arr)+fibodp(n-2,arr);
}

int bottomupfibo(int n,int*arr){
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    
    return arr[n];
}
int main(){

    int pos;
    cin>>pos;
    cout<<"simple recursive solution  "<<simplerec(pos)<<endl;

    int*arr=new int[pos+1];
    for (int i = 0; i <= pos; i++)
    {
        arr[i]=-1;
    }
    
    cout<<"TopDown solution  "<<fibodp(pos,arr)<<endl;

    cout<<"BottomUp solution  "<<bottomupfibo(pos,arr)<<endl;
    return 0;
}