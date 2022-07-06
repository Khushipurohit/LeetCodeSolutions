// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n == 1){
            return 1;
        }
        
        if(n == 2){
            return -1;
        }
        
        
        int leftsum[n];
        int suml = 0;
        for(int i = 0; i < n; i++){
            suml += a[i];
            leftsum[i] = suml;
        }
        
        int rightsum[n];
        int sumr = 0;
        for(int i = n-1; i >= 0; i--){
            sumr += a[i];
            rightsum[i] = sumr;
        }
        
        for(int i = 0; i < n; i++){
            if(leftsum[i] == rightsum[i]){
                return i+1;
            }
            
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends