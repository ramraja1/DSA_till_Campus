class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                if(y>x){
                    swap(nums[x],nums[y]);
                }
                x++;
                y++;
            }
            else{
                y++;
            }
        }
        return nums;
        
    }
};

// 905