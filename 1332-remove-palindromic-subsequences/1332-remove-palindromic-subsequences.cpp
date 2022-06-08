class Solution {
public:
    int removePalindromeSub(string s) {
        int n = s.size()-1;
        
        for(int i = 0; i<n; i++){
            
            if(s[i] != s[n]) return 2;
            n--;
        }
        
        return 1;
    }
};