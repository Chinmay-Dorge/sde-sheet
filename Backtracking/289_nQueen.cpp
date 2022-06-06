class Solution {
public:
    bool isSafe(int row , int col , int n , vector<string> board){
        int tc = col , tr = row;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;col--;
        }
        
        col = tc ; row = tr;
        while(col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        
        col = tc;
        while(row < n && col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++; col--;
        }
        
        return true;
    }
    void solve(int col, vector<vector<string>>& ans, vector<string>& board , int n){
        if(col == board.size()){
            ans.push_back(board);
        }
        
        for(int row = 0 ; row < n ; row++){
            if(isSafe(row,col,n,board)){
                board[row][col] = 'Q';
                solve(col+1,ans,board,n);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i = 0 ; i < n  ;i++){
            board[i] = s;
        }
        
        solve(0,ans,board, n);
        
        return ans;
    }
};