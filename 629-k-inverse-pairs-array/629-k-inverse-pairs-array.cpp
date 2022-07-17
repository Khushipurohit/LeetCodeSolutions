class Solution {
public:
    int kInversePairs(int n, int k) {
        int mod = 1e9+7;

    vector<int> a(k+1);
    
    a[0] = 1;
    
    vector<int> b(k+1);
    
    for(int i=2;i<=n;i++){
        int sum = 0;
        for(int j=0;j<=k;j++){
            sum += a[j];
            
            if(j-i >=0)
                sum -= a[j-i];
            
            if(sum < 0){
                sum += mod;
            }
            
            else
                sum %= mod;
            
            b[j] = sum;
        }
        
        a = b;
    }
    
    return a[k];
    }
};