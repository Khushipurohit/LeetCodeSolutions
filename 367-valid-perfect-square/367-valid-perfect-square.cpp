class Solution {
public:
    bool isPerfectSquare(int num) {
        long long result=0,i=1;
        while(result<num) {
             result+=i;
              i+=2;
        }
        if(result==num){
            return true;
        }
        else{
            return false;
        }
    }
};