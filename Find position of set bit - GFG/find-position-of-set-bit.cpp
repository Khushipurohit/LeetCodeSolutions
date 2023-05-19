//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        
        int cnt = 0;
        int pos = -1, k = 0;
        
        while(N){
            k++;
            if(N%2 == 1){
                cnt++;
                pos = k;
            }
        
            
            N >>= 1;
            if(cnt == 2){
                return -1;
            }
        }
        
        return pos;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends