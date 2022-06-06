class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int MAX = INT_MIN;
        int current = 0;
        for(int i = 0; i < n; i++){
            current += nums[i];
            
            MAX = max(MAX, current);
            
            if(current < 0){
                current = 0;
            }
        }
        
        return MAX;
        
    }
};