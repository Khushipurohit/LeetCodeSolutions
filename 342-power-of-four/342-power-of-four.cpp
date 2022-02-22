class Solution {
public:
    bool isPowerOfFour(int n) {
        int count=0;
        for(int i=0; i<=15; i++){
            if(n==pow(4,i)){
                count=1;
            }
            else{
                continue;
            }
        }
        return count;
    }
};