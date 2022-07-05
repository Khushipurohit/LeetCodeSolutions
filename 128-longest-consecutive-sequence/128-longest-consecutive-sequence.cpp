class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int count = 1;
        int Max = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1] - 1){
                count++;
            }
            else if(nums[i] != nums[i+1]){
                Max = max(Max, count);
                count = 1;
            }
        }
        
        Max = max(Max, count);
        return Max;
    }
};