class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         vector<string>s;
        
        int n = nums.size();
		
        if(n == 0 ){  
            return s;
        }
        
		
        int a = nums[0];
        
        for(int i = 0; i < n; i++)
        {
			
            if( i == n-1 || nums[i]+1 != nums[i+1])
            {
			    
                if(nums[i] != a)
                    s.push_back(to_string(a)+ "->"+ to_string(nums[i]));
					
				
                else
                        s.push_back(to_string(a));
						
				
                if(i != n-1)
                    a = nums[i+1];
            }
        }
		
        return s;
    }
};