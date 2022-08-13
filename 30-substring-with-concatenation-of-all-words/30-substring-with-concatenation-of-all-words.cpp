class Solution {
public:
    bool isPossible(string &s,int i,int j , unordered_map<string,int> &m,int len) {
        
       unordered_map<string,int> freq;  
        
        int k = i;
        while(k < j-len+2){
            
           string str = s.substr(k,len);
            freq[str]++;
            k+=len;
            
        }
        
        for(auto i : freq){
            
            if(i.second != m[i.first]){
                
                return false; 
                
            }
        }
    
        return true;
        
    }
    
    
    vector<int> findSubstring(string s, vector<string>& words) {
        
    
        
       unordered_map<string,int> m;
        for(int k = 0;k<words.size();k++){  
            m[words[k]]++;
        }
        
      int windowSize = words.size()*(words[0].size());  
       int i =0,j = windowSize-1;
        
        vector<int> ans;    
        
        while(j<s.size()){    
            
         if(isPossible(s,i,j,m,words[0].size()))
         {
             ans.push_back(i);  
         }
            
            i++;
            j++; 
            
        }
        
        return ans;
    }
};