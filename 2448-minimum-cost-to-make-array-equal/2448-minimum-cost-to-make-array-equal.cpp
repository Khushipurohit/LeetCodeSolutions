class Solution {
public:
    
    long long calculateCost(vector<int>& nums, vector<int>& cost, int target) {
      long long sumOfCost = 0;
      for(int i=0;i<nums.size();i++) {
        sumOfCost += ((long long)abs(nums[i]-target)*(long long)cost[i]);
      }
      return sumOfCost;
    }

    long long minCost(vector<int>& nums, vector<int>& cost) {
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());
        long long ans = 1e17;
        while(left<=right) {
          int mid = (left+right)/2;
          long long costMid = calculateCost(nums, cost, mid);
          long long costAfterMid = calculateCost(nums, cost, mid+1);
          if(costMid<costAfterMid) {
            right = mid - 1;
          } else {
            left = mid + 2;
          }
          ans = min(ans, min(costMid, costAfterMid));
        }
        return ans;
    }
};