//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        
        int i = 0;

        int j = 0;

        int ans=0;

        

        while(i < N){

            if(abs(arr[i] - arr[j] ) <= 1){

                ans = max(ans,i-j+1);

                i++;

            }
            else{

                if(abs(arr[i] - arr[j]) > 1){

                    j++;

                }

            }

        }

        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends