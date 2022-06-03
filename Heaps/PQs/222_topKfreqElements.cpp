class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it = m.begin() ; it != m.end() ; it++){
            v.push_back({it->first,it->second});
        }
        sort(v.begin() , v.end() , [](auto &a , auto &b){
            return a.second > b.second;
        });
        vector<int> ans;
        int c = 0;
        for(auto it = v.begin() ; it != v.end() ; it++){
            if(c < k){
                ans.push_back((*it).first);
                c++;
            }
        }
        return ans;
    }
};