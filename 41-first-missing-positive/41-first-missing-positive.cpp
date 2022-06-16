class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int ans=1,n=nums.size();
   
    sort(nums.begin(),nums.end());

     for(int i=0;i<n;i++)
     {
         if(nums[i]>ans)
         {
            break; 
         }
         else if(nums[i]==ans)
         {
             ans++; 
         }
     
     }

  return ans;
    }
};