//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &e)
        {
            //  code here
            
             vector<int>p(n+1,0),q(m+1,0);

            for(auto it:e){

                p[it[0]]=1;

                q[it[1]]=1;

                

            }

            

           

            int a=0,b=0,pmx=-1,qmx=-1;

             for(int i=1;i<=n;i++)

             {

                 if(p[i]){

                     pmx=max(pmx,a);

                     a=0;

                 }else a++;

                

             }

         pmx=max(pmx,a);

        for(int i=1;i<=m;i++)

             {

                

                  if(q[i]){

                     qmx=max(qmx,b);

                     b=0;

                 }else b++;

            }

       

        qmx=max(qmx,b);

        return pmx*qmx;
            
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends