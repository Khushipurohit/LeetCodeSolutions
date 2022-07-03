class Solution {
public:
    int reverse(int x) {
         int r,temp;
        long long sum=0;
        temp=x;
    
        while(x!=0){
            
            r=x%10;
            sum =(sum*10)+r;
            
            x=x/10;
          
        }
        
        if (sum > INT_MAX) return 0;
            if (sum < INT_MIN) return 0;
        
        return sum;

    }
};