class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=0, count=0;
        vector<int>ans;
        
       // sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                count++;
                n=i;
            }
        }
        if(count==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ans.push_back(n - count + 1);
            ans.push_back(n);
        }
        return ans;
    }
};