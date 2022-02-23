class Solution {
public:
    int minMoves(vector<int>& nums) {
         sort(nums.begin() , nums.end() );
        
        int moves = 0;
        int smallest = nums[0];
        while(nums.back() != smallest){  
            int ele = nums.back() + moves; 
            nums.pop_back();
            moves = ele - smallest; 
        }
        
        return moves;
    }
};