//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
         map<string,vector<string>> mp;

    sort(contact,contact+n);

        vector<vector<string>> ans;

        for(int i=0; i<s.size(); i++){

            string res = s.substr(0,i+1);

            for(int j=0; j<n; j++){

                if(res == contact[j].substr(0,i+1)){

                // Here we need to check whether the string pre exist or not

                    if(find(mp[res].begin(),mp[res].end(),contact[j]) == mp[res].end()){

                    mp[res].push_back(contact[j]);}

                }

            }

            if(mp[res].size() == 0){

                mp[res].push_back("0");

            }

        }

        for(auto pr: mp){

            ans.push_back(pr.second);

        }

        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends