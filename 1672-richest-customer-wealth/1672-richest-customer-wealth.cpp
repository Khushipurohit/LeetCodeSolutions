class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
          int maxi=0,sum=0;
        int size=accounts.size();
       // cout << size;
            for(int i=0;i<size;i++)
            {  
                sum =0;
                for(int j=0;j<accounts[i].size();j++)
                {
                    
                    sum+=accounts[i][j];
                    //maxi=max(maxi,sum);
                }
            //cout<<"sum="<<sum;
             maxi=max(maxi,sum);
            } 
        return maxi;
    }
};