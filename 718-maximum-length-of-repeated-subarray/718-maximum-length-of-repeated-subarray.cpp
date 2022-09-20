class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
       
        if (nums1.size() < nums2.size()){
            swap(nums1, nums2);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        
        vector<int> v(n + 1, 0);
        
        int maxi = 0;
        
        for(int i = 0; i < m; i++) {
            
            for(int j = n - 1; j >= 0; j--) {
                
                if (nums1[i] == nums2[j]) {
                    
                    v[j + 1] = v[j] + 1;
                    
                } 
                
                else {
                    v[j + 1] = 0;
                }
                              
                maxi = max(maxi, v[j + 1]);
            }
            
        }
        
        return maxi;
    }
};