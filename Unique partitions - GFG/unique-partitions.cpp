//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        
        unordered_map<int,vector<vector<int>>>m;

        m[1] = {{1}};

        m[2] = {{2}, {1,1}};

        for(int i=3; i<=n; i++) {

            m[i].push_back({i});

            for(int j=i-1; j>1;j--) {

                int res = i-j;

                for(auto &k: m[res]) {

                    if(k[0] > j) continue;

                    vector<int>v(1, j);

                    v.insert(v.end(),k.begin(),k.end());

                    m[i].push_back(v);

                }

            }

            m[i].push_back(vector<int>(i, 1));

        }

        return m[n];
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends