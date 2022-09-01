class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int k = s.length();
        for(int i = k-1; i >= 0; i--){
            
            if(i == k - 1 && s[i] == ' '){
                k -= 1;
                count--;
            }
            else if(s[i] == ' '){
                break;
            }
            count++;
        }
        
        return count;
    }
};