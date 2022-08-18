class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
      unordered_map<int,int>m;
	    vector<int> vec;
        int count = 0;
        int sum = 0;
        
	    for(int i = 0; i < arr.size(); i++){
	        m[arr[i]]++;
	    }
	    
	   for(auto it : m)
       {
	       vec.push_back(it.second);
	   }
	   
	   sort(vec.begin(), vec.end());
	  
	   for(int i = vec.size() - 1; i >= 0; i--){
           if(sum >= arr.size()/2){
               return count;
           }
           
           count++;
           
           sum += vec[i];
       }
        
        return count;
    }
};