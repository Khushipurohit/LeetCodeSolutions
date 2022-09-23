class Solution {
public:
    
    void subset(vector<vector<int>>&v, vector<int>&nums, int i, vector<int>v1)
    {
        
        if(i==nums.size())
        {
            v.push_back(v1);
            return;
        }
        
        subset(v, nums, i+1, v1);
        
        v1.push_back(nums[i]);
        
        subset(v, nums, i+1, v1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int cnt = 0;
        vector<vector<int>>v;
        
        vector<int>v1;
        
        subset(v, nums, cnt, v1);
        
        return v;
    }
};