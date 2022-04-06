class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i,j,k=nums.length;
        int arr[] = new int[2];
        for(i=0; i<k; i++){
            for(j=i+1; j<k; j++){
            if((nums[i]+nums[j]==target) && i!=j){
                arr[0]=i;
                arr[1]=j;
                }
        }
             }
        
        
        return arr;
    }
}