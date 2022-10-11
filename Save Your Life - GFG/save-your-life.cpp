//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here   
          
          map<char, int> mp;
          for(int i = 0; i < n; i++) mp[x[i]] = b[i];
          
          int cur = 0, prev = 0;
          int msf = -1e9, meh = 0;
          
          int start = 0;
          for(int i = 0; i < w.size(); i++) {
              int val = w[i];
              if(mp.find(val) != mp.end()) {
                  val = mp[val];
              }
              
              if(meh + val >= 0) {
                  meh += val;
                  if(meh > msf) {
                      msf = meh;
                      prev = start;
                      cur = i;
                  } 
              } else {
                  start = i + 1;
                  meh = 0;
              }
          }
          
          return w.substr(prev, cur - prev + 1);
          
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends