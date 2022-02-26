class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         sort(strs.begin(), strs.end());
        
        // take start index string into str1, and last index string into str2
        string str1 = strs[0], str2 = strs[strs.size()-1];
    
        int i = 0, j = 0;
        
        string ans = "";
        
        while((i < str1.size() && j < str2.size()) && (str1[i] == str2[j])){
            ans += str1[i];
            i++, j++;
        }
        return ans;
    }
};