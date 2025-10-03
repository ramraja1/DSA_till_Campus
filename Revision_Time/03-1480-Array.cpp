class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            ans[i]=s;
            

        }
        return ans;
        
    }
};