#include<bits/stdc++.h>
using namespace std;
class Solution1 {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>s;
        vector<int>ps(n),ns(n);
    for(int i=0;i<n;i++){
        while(!s.empty() and heights[s.top()]>heights[i]){
            ns[s.top()]=i;
            s.pop();
        }
        s.push(i);
        }

        while(!s.empty()){
        ns[s.top()]=n;
        s.pop();
        }


    for(int i=n-1;i>=0;i--){
        while(!s.empty() and heights[s.top()]>heights[i]){
            ps[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty()){
    ps[s.top()]=-1;
    s.pop();
}

    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans, heights[i]*(ns[i]-ps[i]-1));
    }
    return ans;
    }
};

class Solution2 {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int j=i+1,ns,ps;
            while(heights[j]>=heights[i] and j<n){
                j++;
            }
                ns=j;

            j=i-1;
            while (heights[j]>=heights[i] and j>=0)
            {
                j--;
            }
                ps=j;
            
            ans=max(ans,(ns-ps-1)*heights[i]);
        }

        return ans;
    }
    
};

int main(){
    int n;
    cin>>n;
    vector<int>heights;
    for (int i = 0; i < n; i++)
    {
        cin>>heights[i];
    }
    
    Solution2 a;


    return 0;
}