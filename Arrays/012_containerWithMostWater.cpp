class Solution {
public:
    int maxArea(vector<int>& height) {
        int f = 0  , b = height.size()-1;
        int ans = 0;
        while(f <= b){
            ans = max(min(height[f], height[b])*(b-f) , ans);
            if(height[f] < height[b]){
                f++;
            }
            else{
                b--;
            }
        }
        return ans;
    }
};