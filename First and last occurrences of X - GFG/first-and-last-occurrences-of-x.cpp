// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &nums, int n, int target) {
        // Code here
        vector<int>ans;
        
        int l = 0, k = -1 , p = -1;
        int h = nums.size() - 1;
       
        while(l <= h){
            int mid = (l+h)/2;
            
            if(nums[mid] == target){
                k = mid;
                h = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        if(k != -1){
        ans.push_back(k);
        }
        l = 0;
        h = nums.size() - 1;
        
        while(l <= h){
            int mid = (l+h)/2;
            
            if(nums[mid] == target){
                p = mid;
                l = mid + 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        ans.push_back(p);
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends