class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       int i = 0, j = 0;
        set<int>st;
        while(i < nums.size())
        {
            if(i > k)
            {
                st.erase(st.find(nums[j]));
                j++;
            }            
            if(st.find(nums[i]) != st.end())
                return true;
            st.insert(nums[i]);
            i++;
        }
    return false;        
        
    }
};