class Solution {
public:
   
    int solve(vector<int>& nums, int target, vector<int>& dp){
    int res = 0;
        //vector<int> dp(target + 1, -1);
        //dp[0] = 1;
        if(target < 0){
            return 0;
        }
        
        if(target == 0){
            return 1;
        }
        
        if(dp[target] != -1){
            return dp[target];
        }
       // for(int i = 1; i <= target; i++){
        for(int i = 0; i < nums.size(); i++){
            // if(i - nums[j] >= 0){
            // dp[i] += dp[i - nums[j]];
            // }
            res += solve(nums, target - nums[i], dp);
        }
       // }
        dp[target] = res;
        
        return dp[target];
        
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target + 1, -1);
        return solve(nums, target, dp);
    }
};