class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        
        int l = 0, k = -1 , p = -1;
        int h = nums.size() - 1;
       
        while(l <= h){
            int mid = (l+h)/2;
            
            if(nums[mid] == target){
                k = mid;
                h = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        ans.push_back(k);
        l = 0;
        h = nums.size() - 1;
        
        while(l <= h){
            int mid = (l+h)/2;
            
            if(nums[mid] == target){
                p = mid;
                l = mid + 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        ans.push_back(p);
        
        return ans;
    }
};