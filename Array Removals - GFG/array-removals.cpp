//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
        
        int min=0,Max=0; 
        sort(arr.begin(), arr.end());

        for(int i=0;i<arr.size();i++)  {
            while(arr[i]-arr[min]>k) min++;
            Max = max(Max,i-min+1);  
            
        }
    
    return arr.size()-  Max;
    
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends