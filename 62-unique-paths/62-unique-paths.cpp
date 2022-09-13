class Solution {
public:
    int uniquePaths(int m, int n) {
        
        // int k = m+n-2;
        // int l = m-1;
        double ans=1;
        
        for(int i = 1; i < m; i++)
        {
            ans = ans * (n - 1 + i) / i;
        }
        return (int)ans;
    }
};