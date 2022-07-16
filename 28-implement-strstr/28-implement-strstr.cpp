class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        
        
        
        if(m == n){
            if(haystack == needle){
                return 0;
            }
        }
        
        for(int i = 0; i<= m - n; i++){
            if(haystack.substr(i,n) == needle){
                return i;
            }
        }
        
        return -1;
        
        }
    
};