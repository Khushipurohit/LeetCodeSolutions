class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> m1;
        unordered_map<char, char> m2;
        
        for(int i = 0 ; i < s.length(); i++){
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        
        for(int i = 0 ; i < s.length(); i++)
        {
            if(m2.find(m1[s[i]]) != m2.end())
            {
                if(m2[t[i]] != s[i] || m1[s[i]] != t[i])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};