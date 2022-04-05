class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0, n= nums.size();
         if(nums[0]>target)
    {
       return 0;;
    }
    if(nums[n-1]<target)
    {
              return n;;
    }

   for(i=0;i<n;i++)
   {
   if(nums[i]==target)
   {
        break;
   }
   else if (nums[i]>target)
   {
      break;        
   }
   }
        return i;
    }
};