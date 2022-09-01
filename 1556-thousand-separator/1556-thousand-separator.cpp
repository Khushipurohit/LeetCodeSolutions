class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        int k = s.length();
        if(k > 3){
        while(k > 3){
            
            s.insert(k - 3, ".", 1);
            
            k -= 3;
        }
        }
        
        return s;
        
    }
};