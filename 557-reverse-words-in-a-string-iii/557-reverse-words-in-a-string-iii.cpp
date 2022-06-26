class Solution {
public:
    string reverseWords(string s) {
       int j = 0;
    	for(int i = 0 ; i <= s.size() ; i++){
    			if(s[i] == ' ' || i == s.size()){
    				reverse(s.begin() + j , s.begin() + i );
    				j = i+1;
    				i++;
    		}
    	}
    	return s;
    }
};