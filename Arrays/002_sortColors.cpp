class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0 , o = 0 , t = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                z++;
            }
            if(nums[i] == 1){
                o++;
            }
            if(nums[i] == 2){
                t++;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(z){
                nums[i] = 0;
                z--;
            }else if(o){
                nums[i] = 1;
                o--;
            }else if(t){
                nums[i] = 2;
                t--;
            }
        }
    }
};