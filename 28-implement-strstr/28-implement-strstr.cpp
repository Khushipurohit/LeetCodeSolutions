class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=-1){
            return haystack.find(needle);
        }
     
            return -1;
      
        }
    
};