class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        map<int, long long int>m;
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < arr.size(); i++){
            m.insert({arr[i], 1});
        }
        
        for(int j = 0; j < arr.size(); j++){
            
            auto it3 = m.find(arr[j]);
            long long int count = 0;
            
            for(int k = 0; k < j; k++){
                
                if(arr[j] % arr[k] == 0){
                    
                    auto it = m.find(arr[j] / arr[k]);
                    auto it2 = m.find(arr[k]);
                    
                    if(it != m.end()){
                        count += (it->second)*(it2->second);
                    }
                }
            }
            
            it3->second += count;
        }
        
        long long int sum = 0;
        
        for(auto x = m.begin(); x != m.end(); x++){
            sum += x->second;
        }
        
        return sum%1000000007;
        
    }
};