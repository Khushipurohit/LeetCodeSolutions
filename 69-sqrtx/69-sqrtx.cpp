class Solution {
public:
    int mySqrt(int x) {
        int result=0,odd;
        for(int i=x, odd = 1; i>0; i-= odd){
		odd+= 2;
		result++;
	}
        return result;
    }
};