//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
        int j=k-1;
        int i=0;
        int left=-k;
        int end = n/k;
        int m = n%k;
        
       // cout<<i<<"\n";
       
       
        for(int c = 0; c < end; c++)
        {
            
            
            i = k*c;
            j = i + k - 1;
            //cout<<i<<j<<"\n";
            
            if(j>=n)j=n-1;
            if(i>=n)break;
            
            while(j<n && i<j)
             swap(arr[i++],arr[j--]);
        }
        
        
        
        reverse(arr.begin()+n-m,arr.end());
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends