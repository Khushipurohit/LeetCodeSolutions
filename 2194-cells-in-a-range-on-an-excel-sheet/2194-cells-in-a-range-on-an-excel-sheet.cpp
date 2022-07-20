class Solution {
public:
    vector<string> cellsInRange(string s) {
        char j = s[0];
        vector<string>res;
        for(char i = s[1]; i <= s[4] && j <= s[3]; i++){
            res.push_back({j,i});
            if(i == s[4]){
                j++;
                i = s[1];
                i--;
                
            }
        }
        
        return res;
    }
};