class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
         int maximum = 0;
	for (int i = 0, j = n - 1, k = j; k > 0; k--){
        
	maximum = max(maximum, k * (height[i] < height[j] ?  height[i++] : height[j--]));
        
    }
        
	return maximum;
    }   
};