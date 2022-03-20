class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") {
            return "0";
        }
        
        int n=num1.length();
        int m=num2.length();
        
        vector<int> temp(n+m,0);
        for(int i=n-1;i>=0;i--) {
            for(int j=m-1;j>=0;j--) {
                temp[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                temp[i+j] += temp[i+j+1]/10;
                temp[i+j+1] %= 10;
            }
        }
        
        string ans = "";
        
        int i=0;
        
        while(i<temp.size() && temp[i]==0) {
            i++;
        }
        
        while(i<temp.size()) {
            ans.push_back(temp[i++]+'0');
        }
        return ans;
    }
};