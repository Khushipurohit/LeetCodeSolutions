//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> arr)
	{
		// Your code goes here
		vector<int>ans;
		int glbl=0;
		 //before diagnols vale elements
		while(glbl<n){
		    int i=0,j=glbl;
		    while(i<=glbl and j>=0){
		        ans.push_back(arr[i][j]);
		        i++;
		        j--;
		    }
                glbl++;		    
		}

	 //after dignoal vale elements
		   for(int i=1;i<n;i++){
		       int i1=i;
		       for(int j=n-1;j>=i;j--){
		           ans.push_back(arr[i1++][j]);
		       }
		   }
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends