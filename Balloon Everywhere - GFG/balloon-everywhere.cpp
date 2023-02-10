//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char, int>m;
        
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        int k = min(m['b'], m['a']);
        int l = min((m['o'])/2, m['n']);
        int o = min(k, l);
        int n = min(o, (m['l'])/2);
        
        return n;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends