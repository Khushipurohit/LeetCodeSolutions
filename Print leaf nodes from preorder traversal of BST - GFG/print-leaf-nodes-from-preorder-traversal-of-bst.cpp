//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        // code here
        
                  stack<int> st;

        vector<int> res;

        for(int i=0;i<N-1;++i)

        {

            if(arr[i+1]<arr[i])

                st.push(arr[i]);   
            else

            {

                if((!st.empty()) && arr[i+1]>st.top())

                {

                    while((!st.empty()) && arr[i+1]>st.top())

                        st.pop();

                    res.push_back(arr[i]);

                }

            }

        }

        res.push_back(arr[N-1]);

        return res;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends