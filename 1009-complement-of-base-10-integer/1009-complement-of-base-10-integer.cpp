class Solution {
public:
    int bitwiseComplement(int n) {
        int count = 1;
        int comp = 0;
        
        if(n==0){
            return 1;
        }
        while(n>0){
            
            int bit = n & 1;
            
            if(bit == 0){
                comp += count;
            }
            
            n = n>>1;
            count = count*2;
        }
        
        return comp;
    }
};