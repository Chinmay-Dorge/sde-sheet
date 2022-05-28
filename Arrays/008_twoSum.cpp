class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum ;
        vector<int> ans(2); 
        int len = nums.size();
        for(int i =0 ; i < len ; i++){
            for(int j = i+1 ; j < len ; j++){
                sum = nums[i] + nums[j];
                if(sum == target){      
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        }
        return ans;
    }
};