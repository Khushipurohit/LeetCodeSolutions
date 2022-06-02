class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
       if(nums[i]==0)
       {
           count++;
       }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            ans.push_back(nums[i]);
        }
    }

    while (count--) {
        ans.push_back(0);
    }


    for (int i = 0; i < n; i++) {
        nums[i] = ans[i];
    }
    }
};