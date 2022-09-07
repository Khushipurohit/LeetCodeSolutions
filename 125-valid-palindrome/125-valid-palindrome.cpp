class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ans.push_back(s[i]);
            }
            
            if(s[i] >= 'A' && s[i] <= 'Z'){
                //int ch = tolower('s[i]');
                ans.push_back(s[i] + 32);
            }
            if(s[i] >= '0' && s[i] <= '9'){
                ans.push_back(s[i]);
            }
        }
        
        // for(int i = 0; i < ans.size(); i++){
        //     cout << ans[i];
        // }
        if(ans.size() == 0){
            return true;
        }
        else{
        for(int i = 0; i <= ans.size()/2; i++){
            if(ans[i] != ans[ans.size() - i - 1]){
                cnt = 1;
            }
        }
        }
        
        if(cnt == 1){
            return false;
        }
        
        return true;
    }
};