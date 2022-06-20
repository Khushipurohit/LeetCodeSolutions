class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         
        int k = nums.size()+1;
        for(int i = 0; i < nums.size(); i++){
            if((nums[i] > 0 && nums[i] <= nums.size()) && nums[i] == nums[nums[i]-1]){
                continue;
            }
            
            else if(nums[i] > 0 && nums[i] <= nums.size())
            {
                int temp = nums[i];
                nums[i] = nums[temp - 1];
                nums[temp - 1] = temp;
                i--;
            }
        }
        
        for(int i = 0; i <nums.size(); i++){
            if(nums[i] != i+1){
                k = i+1;
                break;
            }
        }
        
        
        return k;
    }
};