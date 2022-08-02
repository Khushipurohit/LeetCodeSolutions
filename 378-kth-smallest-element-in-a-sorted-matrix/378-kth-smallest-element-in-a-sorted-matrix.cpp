class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        
        int l = matrix[0][0];
        int h = matrix[n-1][n-1];
        
        int mid, temp, count;
        
        while(l < h){
            mid = l + (h - l) / 2;
            temp = n - 1;
            count = 0;
            
            
            for(int i = 0; i < n; i++){
                
                while(temp >= 0 && matrix[i][temp] > mid){
                    temp--;
                }
                count += (temp + 1);
            }
            
            if(count < k){
                l = mid + 1;
            }
            else{
                h = mid;
            }
        }
        return l;
    }
};