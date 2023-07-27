class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>h;
        int count=1;
        int i=0;
        while( i<nums.size()){
            if(count<=k){
                h.push(nums[i]);
                count++;
            }
            else 
                {if(nums[i]>h.top()){
                    h.pop();
                    h.push(nums[i]);
                }
            }
            i++;
        }
        return h.top();
    }
};