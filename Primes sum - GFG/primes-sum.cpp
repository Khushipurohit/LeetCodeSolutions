//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:

    bool Prime(int n)

    {

        

        for(int i=2; i<=sqrt(n); i++)

        {

            if(n%i == 0 )

            {

                return 0;

            }

        }

        

        return 1;

    }

    string isSumOfTwo(int N){
        // code here
        
        if(N % 2 != 0 && (Prime(N-2)) == false){
            return "No";
        }
        
        return "Yes";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends