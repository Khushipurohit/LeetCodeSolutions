class Solution {
    public int maxArea(int[] height) {
         var maxWater = 0;
	for (int left = 0, right = height.length - 1, distance = right; distance > 0; distance--)
		maxWater = Math.max(maxWater, distance * (height[left] < height[right] ? 
												  height[left++] : 
												  height[right--]));
	return maxWater;
    }
}