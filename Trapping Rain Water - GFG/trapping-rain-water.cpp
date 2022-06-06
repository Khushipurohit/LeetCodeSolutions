// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long sum=0;
        int lmax[n], rmax[n];
        int ma, mi;
        ma = lmax[0] = arr[0];
        
        for(int i = 1; i < n; i++){
            if(arr[i] > ma) ma = arr[i];
            lmax[i] = ma;
        }
        
        mi = rmax[n-1] = arr[n-1];
        
        for(int i = n-2; i >= 0; i--){
            if(arr[i] > mi) mi = arr[i];
            rmax[i] = mi;
        }
        
        for(int i = 0; i < n; i++){
            sum = sum + (min(lmax[i], rmax[i]) - arr[i]);
        }
        
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends