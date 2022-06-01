class Solution {
public:
    bool isValid(string s) {
        int l = s.length();     
        stack<char> st;
        bool ans = true;
        for(int i=0 ; i<l;i++){
            if(st.empty()){
                st.push(s[i]);
            }            
            
            else if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }            
            if(!st.empty() && s[i] == ')'){
                if(st.top() == '('){
                    st.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
            if(!st.empty() && s[i] == ']'){
                if(st.top() == '['){
                    st.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
            if(!st.empty() && s[i] == '}'){
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
        }
        
        if(!st.empty()){
            return false;
        }
        return ans;
    }
};