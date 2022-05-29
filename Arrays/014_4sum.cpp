class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.empty()){
            return ans;
        }
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1; j < nums.size() ; j++){
                int temp = target - nums[i] - nums[j];
                int s = j+1 , e = nums.size() -1;
                while(s<e){
                    if((nums[s] + nums[e]) == temp){
                        vector<int> v(4,0);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[s];
                        v[3] = nums[e];                 
                        ans.push_back(v);
                        
                        while(s<e && (nums[s]==v[2])){
                            s++;
                        }
                        
                        while(s<e && (nums[e]==v[3])){
                            e--;
                        } 
                    }else if((nums[s]+nums[e]) > temp){
                        e--;
                    }else{
                        s++;
                    }
                }
                while(j+1 < nums.size() && nums[j+1]==nums[j]){
                    j++;
                }
            }
            while(i+1 < nums.size() && nums[i+1]==nums[i]){
                    i++;
            }
        }
        return ans;
    }
};