class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size(), j = 0;
        if(n<2 || k == 0) return;
        vector<int> v(k);
        for(int i = 0; i<n+k; i++){
            swap(v[j], nums[(i+k)%n]);
            j = (j+1)%k;
        }
    }
};