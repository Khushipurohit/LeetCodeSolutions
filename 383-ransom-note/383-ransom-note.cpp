class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        
        for(auto it : ransomNote){
            m1[it]++;
        }
        
        for(auto it: magazine){
            m2[it]++;
        }
        
        for(auto it : m1)
        {
            if(m2[it.first] < it.second){
                return false;
            }
        }
        return true;
    }
};