class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size(), m=matrix[0].size();
        int rs=0, re=n-1, cs=0, ce=m-1, row, col;
        while(rs<=re && cs<=ce){
            for(col=cs; col<=ce; col++)
                ans.push_back(matrix[rs][col]);
            rs++;
            if(rs>re)
                break;
            
            for(row=rs; row<=re; row++)
                ans.push_back(matrix[row][ce]);
            ce--;
            if(cs>ce)
                break;
            
            for(col=ce; col>=cs; col--)
                ans.push_back(matrix[re][col]);
            re--;
            if(rs>re)
                break;
            
            for(row=re; row>=rs; row--)
                 ans.push_back(matrix[row][cs]);
            cs++;
            if(cs>ce)
                break;
        }
        return ans;
    }
};