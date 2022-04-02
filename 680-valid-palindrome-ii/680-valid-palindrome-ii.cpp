class Solution {
public:
    
     bool Palindrome(string s, int i, int j){
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
    
    
    bool validPalindrome(string s) {
        int n = s.length()-1, count=0;
        
        while(count < n){
            if(s[count] == s[n]){
                count++;
                n--;
            }
            else{
                return Palindrome(s, count+1, n) || Palindrome(s, count, n-1);
            }
        }
        return true;
    }
};