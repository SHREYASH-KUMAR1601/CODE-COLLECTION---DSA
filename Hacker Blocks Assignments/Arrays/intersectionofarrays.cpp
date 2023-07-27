#include <bits/stdc++.h>
using namespace std;

void intersectionofarray(int arr1[],int arr2[] , int n){
    int temp[n];
    int k=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int i=0,j=0;
    while(i<n && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            temp[k]=arr1[i];
            k++;
            i++;
            j++;
        }
    } 
  
    cout<<"[";
    for (int i = 0; i < k; i++)
    {
        if(i==k-1){
            cout<<temp[i];
        }
        else{
            cout<<temp[i]<<", ";
        }
        
    }
    cout<<"]";
}
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    intersectionofarray(arr1,arr2,n);
    return 0;
}