class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count1 = 0;
        int count2 = 0;
        int count = 0;
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] < target){
                count1++;
            }
            
            if(nums[i] > target){
                count2++;
            }
            
            if(nums[i] == target){
                count++;
            }
            
        }
        
        if(count == 0){
            return ans;
        }
        
        else if(count1 == nums.size() - count2 -1){
            ans.push_back(count1);
        }
        else{
            for(int i = count1; i < nums.size() - count2; i++){
        ans.push_back(i);
        
            }
        }
        
        return ans;
    }
};