class Solution {
public:
    void search(string concat , string needle, vector<int> &z){
        int n = concat.size();
        int l, r, k, ans;
        l = r = ans = 0;
        for(int i = 1 ; i < n ; i++){
            if(i>r){
                l = r = i;
                while(r<n && concat[r] == concat[r-l]){
                    r++;
                }
                z[i] = r-l;
                r--;
            }else{
                k = i-l;
                if(z[k] < r-i+1){
                    z[i] = z[k];
                }else{
                    l = i;
                    while(r<n && concat[r] == concat[r-l]){
                        r++;
                    }
                    z[i] = r-l;
                    r--;
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        string concat = needle + "$" + haystack;
        int n = concat.size();
        vector<int> z(n,0);
        search(concat,needle,z);
        int ans = -1;
        for(int i = 0 ; i < n ; i++){
            if(z[i] == needle.size()){
                ans = i - needle.size() - 1;
                break;
            }
        }
        for(int i = 0 ; i < n ; i++){
            cout<<z[i]<<" ";
        }
        return ans;
    }
};