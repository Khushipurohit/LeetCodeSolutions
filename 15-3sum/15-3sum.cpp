class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    if(arr.size() < 3){
        return {};
    }
        int h, l;
    for(int i = arr.size() -  1; i >= 2; i--){
        h = i - 1;
        l = 0;
        
        int k = -arr[i];
        if(i != arr.size()-1 && arr[i] == arr[i+1]){
            continue;
        }
        while(l < h){
            int left = arr[l];
        int right = arr[h];
            if(right+left > k){
                h--;
            }
            else if(right+left < k){
                l++;
            }
            else if(right+left == k){
                if((l != 0 && h != i-1) && (arr[l] == arr[l-1] && arr[h] == arr[h+1])){
                    h--;
                    l++;
                    continue;
                }
                else{
                res.push_back({arr[l],arr[h],arr[i]});
                h--;
                l++;
                } 
            }
        }
        
    }
    return res;
    }
};