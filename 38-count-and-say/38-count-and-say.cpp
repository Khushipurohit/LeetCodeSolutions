class Solution {
public:
    string countAndSay(int n) {
        string s = "11";
        if(n == 1){
            return "1";
        }
        else if(n  == 2){
            return "11";
        }
        
        else{
            for(int i = 3; i <= n; i++){
                string temp = "";
                s = s + '$';
                int count = 1;
                for(int j = 1; j < s.length(); j++){
                    if(s[j] != s[j-1]){
                        temp = temp + to_string(count);
                        temp = temp + s[j-1];
                        count = 1;
                    }
                    else{
                        count++;
                    }
                }
                s = temp;
            }
            return s;
        }
        
    }
};