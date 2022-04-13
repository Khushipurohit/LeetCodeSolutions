class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end(), greater <>());
        int count=0;
        if(nums.size()<=2){
            return nums[0];
        }else{
            for(int i=1;i<nums.size();i++){
                if(nums[i-1]>nums[i]){
                    count++;
                }
                if(count==2){
                    return nums[i];
                }
            }
        }
     return nums[0]; 
    }
};