//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
        // code here 
        
         int mod=1000000007;

        if(N<=1)

        return 0;

        vector<int>prev(2,0);

         prev[0]=1;   

       for(int i=2;i<=N;i++)

         {

             vector<int>curr(2,0);

                   curr[0]=((prev[0]+prev[0])%mod+prev[1]%mod)%mod;  

                   curr[1]=((prev[0]+prev[0])%mod+prev[0])%mod;

           prev=curr;

         }

        return prev[1];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends