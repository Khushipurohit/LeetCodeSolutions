class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
             if(nums[i]==nums[i+1]){
                   count=1;
            }
        }
        return count;
    }
};