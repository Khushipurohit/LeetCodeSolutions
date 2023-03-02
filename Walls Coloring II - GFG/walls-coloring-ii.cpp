//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minCost(vector<vector<int>> &c) {
        // write your code here
        
         int n = c.size();
        int k = c[0].size();
        
        if(k==1 && n>1)
        return -1;
        
        else if(k==0 || n==0)
        return -1;
        
        int f = INT_MAX,s = INT_MAX;
        for(int i=0;i<k;i++)
        {
            if(c[0][i]<f)
            {
                s = f;
                f = c[0][i];
            }
            else if(c[0][i]<s)
            {
                s = c[0][i];
            }
        }
        
        int f_min,s_min;
        for(int i=1;i<n;i++)
        {
            f_min = INT_MAX,s_min = INT_MAX;
            for(int j=0;j<k;j++)
            {
                if(c[i-1][j]==f)
                c[i][j]+=s;
                else
                c[i][j]+=f;
                
                if(c[i][j]<f_min)
                {
                    s_min = f_min;
                    f_min = c[i][j];
                }
                else if(c[i][j]<s_min)
                {
                    s_min = c[i][j];
                }
            }
            f = f_min;
            s = s_min;
        }
        
        return f;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends