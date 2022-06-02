class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        stack<int>s;
        for(int num : nums2){
            while(!s.empty() && s.top() < num){
                m[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        vector<int>res;
        for(int x : nums1){
            if(m.find(x)==m.end()){
                res.push_back(-1);
            }
            else{
                res.push_back(m[x]);
            }
        }
        return res;
    }
};