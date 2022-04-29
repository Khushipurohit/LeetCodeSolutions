class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count=0,i;
        for(i=0; i<nums.size(); i++){
            if(nums[i]==target){
                count++;
                break;
            }
        }
        if(count==0){
            return -1;
        }
        else{
            return i;
        }
    }
};