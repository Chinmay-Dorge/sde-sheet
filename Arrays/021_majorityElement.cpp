class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0 ; i < nums.size() ;i++){
            m[nums[i]]++;
        }
        int l = nums.size() / 2;
        for(auto i = m.begin() ; i != m.end() ;i++){
           if((i->second) > l){
               return (i->first);
           } 
        }
        return -1;
    }
};