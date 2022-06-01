class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int index = 0;
        string answer = "";
        bool done = false;
        
        while(index < strs[0].size()){
            char current = strs[0][index];
            
            for(int i = 1; i < strs.size(); i++){
                if (current != strs[i][index]){
                    done = true;
                    break;
                }
            }
            if (done){
                return answer;
            }
            else{
                answer.push_back(strs[0][index]);
                index++;
            }
        }
        return answer;
    }
};