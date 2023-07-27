#include<bits/stdc++.h>
using namespace std;
int temp[10000];
void mergetwosortedarrays(int arr1[],int arr2[],int n){
    int i=0,j=0,k=0;
    while(i<n && j<n){
        if(arr1[i]>arr2[j]){
            temp[k]=arr2[j];
            k++;
            j++;
        }
        else if(arr1[i]<=arr2[j]){
            temp[k]=arr1[i];
            i++;
            k++;
        }
    }

    while(j<n){
        temp[k]=arr2[j];
        k++;
        j++;
    }
    while(i<n){
        temp[k]=arr1[i];
        k++;
        i++;
    }

    // return temp;
}
int main(){
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    // for(int i=0;i<2*n;i++){
    //     cout<<*(mergetwosortedarrays(arr1,arr2,n)+i)<<" ";
    // }
    mergetwosortedarrays(arr1,arr2,n);

    int median; 
    median = (temp[n] + temp[(n)-1]) / 2; 
    cout << median;
    return 0;
}