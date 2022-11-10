//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long X) {
        // code here
        
        long long ans = 1;
        queue<long long> q;
        for(long long i = 1; i <= 9; i++){
            if(i <= X){
                q.push(i);
                ans = max(ans, i);
            }
        }
        while(!q.empty()){
            long long num = q.front();
            q.pop();
            if(num > X) continue;
            else ans = max(ans, num);
            long long lastDigit = num % 10;
            if(lastDigit != 0){
                q.push(num * 10 + lastDigit - 1);
            }
            if(lastDigit != 9){
                q.push(num * 10 + lastDigit + 1);
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
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends