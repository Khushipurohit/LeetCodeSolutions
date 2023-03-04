//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long bestNode(int N, vector<int> &A, vector<int> &P) {
        // code here
        unordered_map<int,int> mp;
        for(int i=1;i<N;i++){
            mp[P[i]]=1;
        }
        set<int> leaf;
        for(int i=1;i<=N;i++){
            if(mp.find(i)==mp.end()){
                leaf.insert(i);
            }
        }
        long long max=INT_MIN;
        for(int a:leaf){
            int val=0;
            do{
                //cout<<a<<" ";
                val=A[a-1]-val;
                max=max<val?val:max;
                //cout<<a<<" "<<val<<endl;
                a=P[a-1];
            }while(a!=-1);
            //cout<<endl;
        }
        
        return max;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        long long res = obj.bestNode(N, A, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends