class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int j = 0;
        int cnt = 0;

        for(int i = 0; i < n-1; i++){
            cnt++;
            if(chars[i] != chars[i+1]){
                 chars[j] = chars[i];
                 j++;
                if(cnt > 1){
                    string s = to_string(cnt);
                    for(char c : s){
                    chars[j] = c;
                    j++;
                    }
                }
                cnt = 0;
            }
        }
         cnt++;
         chars[j] = chars[n-1];
                 j++;
                if(cnt > 1){
                    string s = to_string(cnt);
                    for(char c : s){
                    chars[j] = c;
                    j++;
                    }
                }

        return j;
    }
};