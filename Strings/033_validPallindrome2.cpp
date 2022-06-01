class Solution {
public:
    // bool checkPallindrome(string s){
    //     for(int i = 0 ; i < s.length() ; i++){
    //         if(s[i] != s[n-1-i]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    bool validPalindrome(string s) {
        int n = s.length();
        int a = 0 , b = n-1 , c1 = 0 , c2 = 0;
        while(a < b){
            if(s[a] != s[b]){
                c1++;
                b--;
            }
            else{
                a++;
                b--;
            }
        }
        a = 0 ; b = n-1 ;
        while(a < b){
            if(s[a] != s[b]){
                c2++;
                a++;
            }
            else{
                a++;
                b--;
            }
        }
        if(c1 == 1 || c2 == 1 || c1 == 0 || c2 == 0){
            return true;
        }
        return false;
    }
};