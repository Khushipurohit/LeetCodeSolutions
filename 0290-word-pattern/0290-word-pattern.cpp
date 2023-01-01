class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
         unordered_map<char, string> m1;
        
      vector<string>v;
        istringstream ss(s);
        
        string word;
        
        while(ss >> word){
            v.push_back(word);
        }
        
        if(v.size() != pattern.size()){
            return false;
        }
        
        for(int i = 0; i < pattern.size(); i++){
            if(m1[pattern[i]] == ""){
                m1[pattern[i]] = v[i];
            }
            
            else{
                if(m1[pattern[i]] != v[i]){
                    return false;
                }
            }
        }
        set<string>v1;
        
        for(auto &it : m1){
        
            v1.insert(it.second);
        }
        
        if(v1.size() != m1.size()){
            return false;
        }
        
        return true;
    }
};