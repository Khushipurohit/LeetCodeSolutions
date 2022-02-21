class Solution {
public:
    int tribonacci(int n) {
       int a=0,b=1,c=1;
        if(n<=1)
            return n;
        
        for(int i=0;i<n-2;i++)
        {
            int tmp=a+b+c;
            a=b;
            b=c;
            c=tmp;
            
        }
        return c;
    }
};