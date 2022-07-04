class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int candy = 0; 
        int n = ratings.size();
        
        vector<int>l(n);
        vector<int>r(n);
        
        l[0] = 1;
        r[n-1] = 1;
        
        for(int i = 1; i < n; i++){
            if(ratings[i] > ratings[i - 1]){
                l[i] = l[i - 1] + 1;
            }
            else{
                l[i] = 1;
            }
        }
        
        for(int i = n-2; i >= 0; i--){
            if(ratings[i] > ratings[i + 1]){
                r[i] = r[i + 1] + 1;
            }
            else{
                r[i] = 1;
            }
        }
        
        for(int i = 0; i < n; i++){
            candy += max(l[i], r[i]);
        }
        
        return candy;
    }
};