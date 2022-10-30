//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
	    long long total=1;
	    
	    vector<long long> chick(n,0);
	    chick[0]=1;
	    
	    for(int i=1;i<n;i++){
	        if(i>=6){
	            total-=chick[i-6];
	        }
	        chick[i]=total*2;
	        total+=total*2;
	    }
	    
	    return total;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends