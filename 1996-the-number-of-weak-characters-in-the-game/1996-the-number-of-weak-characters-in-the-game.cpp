class Solution {
public:
    
    static bool fun(vector<int> &a,vector<int> &b){
        
        if(a[0]!=b[0]){
            return a[0]>b[0];
        }
        
        return a[1]<b[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        sort(properties.begin(), properties.end(), fun);
        
        int MAX = INT_MIN;
        int ans = 0;
        
        for(auto it : properties){
            if(MAX > it[1]){
                ans++;
            }
            else {
                MAX = it[1];
                }
        }
        return ans;
    }
};