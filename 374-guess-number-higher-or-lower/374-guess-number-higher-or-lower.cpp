/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
         int a=1, b=n;
        while(a<=b){
            
            int mid = a+(b-a)/2;
            if(guess(mid)==0) 
                return mid;
            
            else if(guess(mid)>0)
                a=mid+1;
            
            else b=mid-1;
        }
        return -1;
    }
};