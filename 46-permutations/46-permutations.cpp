class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>v;
        v.push_back(nums);
        
        int n = 1;
        for(int i = 1; i <= nums.size(); i++){
            n *= i;
        }
        
        while(n>1){
            next_permutation(nums.begin(),nums.end());
            v.push_back(nums);
            n--;
        }
        return v;
    }
};