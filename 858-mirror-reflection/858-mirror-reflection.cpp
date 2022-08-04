int gcd(int a, int b) {
        while(b) {
            a = a % b;
            swap(a, b);
        }
        return a;
    }

class Solution {
public:
    int mirrorReflection(int p, int q) {
        
        
        
        int m = q/gcd(p, q);
        int n = p/gcd(p, q);
        
        if(m%2 == 0 && n%2 == 1){
            return 0;
        }
        else if(m%2 == 1 && n%2 == 1){
            return 1;
        }
        
        else if(m%2 == 1 && n%2 == 0){
            return 2;
        }
        
        return -1;
    }
};