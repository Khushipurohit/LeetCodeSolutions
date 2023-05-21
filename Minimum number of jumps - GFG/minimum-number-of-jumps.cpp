//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        
       
        int highJ = arr[0];
        int steps = arr[0];
        int jump = 1;
        
        if(n == 1){
            return 0;
        }
        
        else if(arr[0] == 0){
            return -1;
        }
        
        else{
            for(int i = 1; i < n; i++){
                if(i == n-1){
                    return jump;
                }
                
                highJ = max(highJ, i+arr[i]);
                steps--;
                
                // if(steps < 0){
                //     return -1;
                // }
                
                if(steps == 0){
                    jump++;
                
                
                 if(i >= highJ){
                        return -1;
                    }
                
                steps = highJ - i;
                }
                
            }
        }
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends