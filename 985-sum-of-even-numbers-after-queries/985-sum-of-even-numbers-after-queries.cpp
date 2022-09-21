class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int sum = 0;
        int n = queries.size();
        
        for (int it : nums) {
            if (it % 2 == 0) {
                sum += it;
            }
        }
        
        vector<int>v(n, 0);
        
        
        for (int i = 0; i < n; i++) {
            
            int val = queries[i][0];
            int index = queries[i][1];
            
            int oldValue = nums[index];
            nums[index] += val;
            
            
            if ((oldValue % 2) == 0 && (nums[index] % 2 == 0)) {
                
                v[i] = sum + val;
                sum += val;
            }
            
            else if ((oldValue % 2) != 0 && (nums[index] % 2 == 0)) {
                
                v[i] = sum + nums[index];
                sum += nums[index];
            } 
            
            else if ((oldValue % 2) == 0 && (nums[index] % 2 != 0)) {
                v[i] = sum - oldValue;
                sum -= oldValue;
            } 
            
            else {
                v[i] = sum;
            }
            
        }
        
        return v;
        
    }
};