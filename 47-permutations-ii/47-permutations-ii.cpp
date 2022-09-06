class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>v;
        s.insert(nums);
        int n = 1;
        for(int i = 0; i < nums.size(); i++){
            n *= (i+1);
        }
        
        while(n>1){
            next_permutation(nums.begin(),nums.end());
            s.insert(nums);
            n--;
        }
        
        for(auto& it : s){
            v.push_back(it);
        }
        
        return v;
    }
};