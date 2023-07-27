#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    int co = 0;
    while (n != 0)
    {
        co++;
        n = n / 10;
    }
    return co;
}

bool armstrongornot(int n){
    int sum=0;
    int temp=n;
    while(temp!=0){
        sum=sum+pow((temp%10),count(n));
        temp=temp/10;
    }
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
}

void armstrong(int m, int n)
{
    int greater = max(m, n);
    int smaller = min(m, n);
    while (smaller <= greater)
    {
        int sum = 0;
        int temp = smaller; // Store the original value of smaller
        while (temp != 0)
        { // Use a separate variable for comparison
            sum = sum + pow((temp % 10), count(smaller));
            temp = temp / 10;
        }
        if (sum == smaller)
        {
            cout << smaller << endl; // Print the Armstrong number
        }
        smaller++;
    }
}

int main()
{
    int n;
    cin >> n;
    // int m;
    // cin >> m;
   // armstrong(m, n);
   if(armstrongornot(n)==true){
    cout<<"true";
   }
   else{
    cout<<"false";
   }
    return 0;
}