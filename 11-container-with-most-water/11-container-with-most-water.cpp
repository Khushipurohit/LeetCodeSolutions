class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
         int maximum = 0, current;
	for(int i = 0, j=n-1, k=j; k>0; k--){
        
    current = (height[i] < height[j] ?  height[i++] : height[j--])*k;  
	maximum = max(maximum, current);
        
    }
        
	return maximum;
    }   
};