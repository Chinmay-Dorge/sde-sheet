class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    
    void helper(string s, int ind, vector<vector<string>>& ans, vector<string>& temp){
        if(ind == s.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i = ind ; i < s.size() ; i++){
            if(isPalindrome(s,ind,i)){
                temp.push_back(s.substr(ind,i-ind+1));
                helper(s,i+1,ans,temp);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        
        helper(s,0,ans,temp);
        
        return ans;
    }
};