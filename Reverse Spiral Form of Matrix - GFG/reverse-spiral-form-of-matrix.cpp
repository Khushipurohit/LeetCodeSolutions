//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int> ans;

        

        int tEle = R*C;

        

        int sRow = 0;

        int lRow = R-1;

        int sCol = 0;

        int lCol = C-1;

        int cnt = 0;

        

        while(cnt < tEle){

            

            if(cnt < tEle){

                for(int i=sCol;i<=lCol;i++){

                    ans.push_back(a[sRow][i]);

                    cnt++;

                }

                sRow++;

            }

            

            if(cnt < tEle){

                for(int i=sRow;i<=lRow;i++){

                    ans.push_back(a[i][lCol]);

                    cnt++;

                }

                lCol--;

            }

            

            if(cnt < tEle){

                for(int i=lCol;i>=sCol;i--){

                    ans.push_back(a[lRow][i]);

                    cnt++;

                }

                lRow--;

            }

            

            

            if(cnt < tEle){

                for(int i=lRow;i>=sRow;i--){

                    ans.push_back(a[i][sCol]);

                    cnt++;

                }

                sCol++;

            }

        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends