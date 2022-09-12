class Solution {
public:
    
     void solve(int col,vector<vector<string>>&ans,int n,vector<int>& left,vector<int>&lup,vector<int>&ldown,vector<string>&board){
         
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;++row){
            if(left[row]==0&&lup[n-1+col-row]==0&&ldown[row+col]==0){
                board[row][col]='Q';
                left[row]=1;
                lup[n-1+col-row]=1;
                ldown[row+col]=1;
                solve(col+1,ans,n,left,lup,ldown,board);
                board[row][col]='.';
                left[row]=0;
                lup[n-1+col-row]=0;
                ldown[row+col]=0;
                
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;
        vector<string>board(n);
        
        string s(n,'.');
        
        for(int i=0;i<n;++i){
            board[i]=s;
        }
        
        vector<int> left(n,0);
        vector<int> lup((2*n-1),0);
        vector<int> ldown((2*n-1),0);
        solve(0,ans,n,left,lup,ldown,board);
        return ans;
        
    }
};