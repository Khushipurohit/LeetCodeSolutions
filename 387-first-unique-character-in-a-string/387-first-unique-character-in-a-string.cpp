class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int>m;
        
        for(char i : s){
            m[i]++;
        }
        char k = '0';
        for(char it : s){
            if(m[it] != 0){
                if(m[it] == 1){
                    k = it;
                    break;
                }
            }
        }
        
        for(int i = 0; i < s.length(); i++){
              if(k == s[i]){
                return i;
              }
        }
        
        return -1;
    }
};