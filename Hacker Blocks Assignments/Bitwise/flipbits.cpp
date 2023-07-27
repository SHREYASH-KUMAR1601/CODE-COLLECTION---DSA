#include<bits/stdc++.h>
using namespace std;
 
int main () {
 
   int n;
   cin >> n;
 
   vector<int> arr(n , 0);
 
   int og = 0; // total one
 
   for (int i = 0 ; i < n ; i++){
       cin >> arr[i];
       og += arr[i];
   }
   
   int sum = 0;
   int ans = INT_MIN;
 
   // 1 -> -1 , 0 -> 1
   for (int i = 0 ; i < n ; i++){
       sum = sum + (arr[i] == 1 ? -1 : 1);
       ans = max(ans , sum);
       if (sum < 0) {sum = 0;}
   }
 
 
   cout << max(og , og + ans) << endl;
 
    return 0;
}