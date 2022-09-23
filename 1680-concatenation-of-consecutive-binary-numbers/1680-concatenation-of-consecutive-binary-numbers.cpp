class Solution {
public:
    int concatenatedBinary(int n) {
        int mod = 1000000007, cnt = 0;
        long ans = 0;
        
        
        for(int i = 1; i <= n; i++){
            
            if(2147483648%i==0) {
                cnt++; 
            }
            ans = ans << cnt; 
            ans = ans | i; 
            ans = ans % mod;
        }
        return ans;
    }
};