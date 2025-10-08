class Solution {
public:
    int search(vector<int>& nums, int target) {
        int x=0;
        int y=nums.size()-1;
        while(x<=y){
            int mid=(x+y)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target){
                y=mid-1;
            }
            else{
                x=mid+1;
            }
        }
        return -1;
    }
};