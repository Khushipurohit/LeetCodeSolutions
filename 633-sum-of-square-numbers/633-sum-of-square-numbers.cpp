class Solution {
public:
    bool judgeSquareSum(int c) {
        long long ans;
ans=sqrt(c);
long long i=0;
long long j=ans;

    while(i<=j)
    {
        ans = (i*i) + (j*j);
        if(ans == c)
        {
            return true;
        }
        else if(ans < c)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
return false;
        
    }
};