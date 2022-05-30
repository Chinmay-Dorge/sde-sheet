class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0 , currSum = 0;
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            currSum += nums[i];
            if(currSum == k){
                ans++;
            }
            if(m[currSum - k]){
                ans += m[currSum - k];
            }
            m[currSum]++;
        }
        return ans;
    }
};