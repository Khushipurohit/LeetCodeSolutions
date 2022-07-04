class Solution {
public:
    bool canJump(vector<int>& nums) {
    
        int Max = nums[0];
        for(int i = 0; i < nums.size(); i++){
            
            if(i > Max) 
                break;
            
            Max = max(Max, nums[i] + i);
        }
        return Max + 1 >= nums.size();
        
    }
};