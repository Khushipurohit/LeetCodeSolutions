//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  int solve(vector<vector<int>>&v, int i, int j, vector<vector<int>>&dp){
      
      int mod = 1e9+7;
      if(i >= 0 && j >=0 && v[i][j] ==0){
          return 0;
      }
      
      if(i == 0 && j == 0){
          return 1;
      }
      
      if(i < 0 || j < 0){
          return 0;
      }
      
      if(dp[i][j] != -1){
          return dp[i][j];
      }
      
      int l = solve(v, i, j - 1, dp);
      int u = solve(v, i-1, j, dp);
      
      return dp[i][j] = (l+u)%mod;
  }
  
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        
        if(grid[0][0] == 0 || grid[n-1][m-1] == 0){
            return 0;
        }
        
        
        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
        
        return solve(grid, n-1, m-1, dp);
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends