class Solution {
    public int[] searchRange(int[] nums, int target) {
     int n=0, count=0;
        int ans[];
            ans= new int[2];
       // sort(nums.begin(), nums.end());
        for(int i=0; i<nums.length; i++){
            if(nums[i]==target){
                count++;
                n=i;
            }
        }
        if(count==0){
            ans[0]= -1;
            ans[1]= -1;
        }
        else{
            ans[0]= n-count+1;
            ans[1]= n;
        }
        return ans;
    }
}