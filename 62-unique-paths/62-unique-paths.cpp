class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int k = m+n-2;
        int l = m-1;
        double ans=1;
        
        for(int i = 1; i <= l; i++)
        {
            ans = ans * (k - l + i) / i;
        }
        return (int)ans;
    }
};