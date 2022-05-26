class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
        int ind = 1;
        for(int i = 0 ; i < (nums.size()-1) ; i++){
            if(nums[i] != nums[i+1]){
                nums[ind] = nums[i+1];
                ind++;
            }
        }
        return ind;
    }
};