#include <bits/stdc++.h>
using namespace std;
void mergetwosortedarrays(int arr[],int s,int e){//1 2 4 3 5
	int temp[1000];
	int i=s;
	int mid=(s+e)/2;//2
	int j=mid+1;
	int k=s;//why not k=0


// loop
	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr[j];
		k++;
		j++;
	}

	}


	// j==e+1 2nd wali array khatam huvi
	// copy karo ist wali array ko
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}

		// i==n ist wali array khatam huvi
	// copy karo 2nd wali array ko
	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;
	}
	// temp ko copy karugi arr wali array mai
	for(int l=s;l<=e;l++){
		arr[l]=temp[l];

	}
}

void mergesort(int arr[],int s,int e){
    // base case
    if(s==e){
        return;
    }

    //rec case
    int mid=(s+e)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,e);
    mergetwosortedarrays(arr,s,e);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    
    return 0;
}