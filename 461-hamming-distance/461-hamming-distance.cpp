class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y,count=0;            
        while(n){
            n &= (n-1);          
            count++;
        }
        return count;
    }
};