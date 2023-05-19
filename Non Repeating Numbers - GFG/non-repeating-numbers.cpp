//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int Xor = 0, And = 1, num1 = 0;
        for(int i = 0; i < nums.size(); i++){
            Xor ^= nums[i];
        }

        while(!(Xor & And)){
            And <<= 1;
        }

        for(auto &it : nums){
            if(And & it){
                num1 ^= it;
            }
        }

        int num2 = num1 ^ Xor;
        
        vector<int>v;
        v.push_back(num1);
        v.push_back(num2);
        
        if(num1 > num2){
            reverse(v.begin(), v.end());
        }

        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends