class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        queue<int>q;
        
        for(auto it : arr){
            while(q.size() == k && (abs(q.front() - x) > abs(x - it))){
                q.pop();
            }
            
            if(q.size() < k){
                q.push(it);
            }
        }
        
        vector<int>v;
        while(q.empty() == false){
            
            v.push_back(q.front());
            q.pop();
        }
        
        return v;
    }
};