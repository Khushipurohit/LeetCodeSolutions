class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int>m;
        
//         for(int i = 0; i < s.length(); i++){
//             if(m.find(s[i]) == m.end()){
//                 m.insert(make_pair(s[i], 1));
//             }
            
//             else{
//                 m[s[i]]++;
//             }
//         }
//         char k = '0';
//         for(auto& it : m){
            
//             // if(it.second == 1){
//             //     k = it.first;
//             //     break;
//             // }
            
//             cout << it.first << " " << it.second << endl;
//         }
//         //cout << k << endl;
//        for(int i = 0; i < s.length(); i++){
//            if(k == s[i]){
//                return i;
//            }
//        }
        
//         return -1;
        
        for(char i : s){
            m[i]++;
        }
        char k = '0';
        for(char it : s){
            if(m[it] != 0){
                if(m[it] == 1){
                    k = it;
                    break;
                }
            }
        }
        
        for(int i = 0; i < s.length(); i++){
              if(k == s[i]){
                return i;
              }
        }
        
        return -1;
    }
};