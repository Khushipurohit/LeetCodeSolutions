class Solution {
public:
    string pushDominoes(string dominoes) {
        string ans = "";
        
        for (int i = 0; i < dominoes.size(); i++){
            if (dominoes[i] == '.'){
                
                int m = i-1;
                int n = i+1;
                bool stop1= false;
                bool stop2 = false;
               
                while (true){
                    
                    if (m < 0) {
                        stop1 = true;
                    }
                    
                    if (n >dominoes.size()-1) {
                        stop2= true; 
                    }
                    
                    if (!stop2) if (dominoes[n] == 'R') {
                        stop2 = true;
                    }
                    
                    if (!stop1) if (dominoes[m] == 'L') {
                        stop1 = true;
                    }
                    
                    if (stop1 && stop2) {
                        break;
                    }
                    
                    if (!stop1 && !stop2) {
                        if(dominoes[n] == 'L' && dominoes[m] == 'R') {
                            ans += '.';
                            break;
                        }
                    }
                    
                     if (!stop2) {
                         if (dominoes[n]=='L' && !stop2) {
                         ans += 'L';
                         break;
                     
                         }
                     }
                    
                     if (!stop1) {
                         if (dominoes[m]=='R' && !stop1) {
                             ans += 'R';
                             break;
                         }
                     }
                    
                    m--;
                    n++;
                }
                
            }
            
            if (ans.size() !=  i+1)
                ans += dominoes[i];
        }
        return ans;
    }
};