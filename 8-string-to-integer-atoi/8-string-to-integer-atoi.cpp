class Solution {
public:
    int myAtoi(string s) {
        int i = 0; 
        int sign = 1;
        while(i < s.length() && s[i] == ' '){
            i++;
        }
        
        if(s[i] == '+' || s[i] == '-'){
            sign = (s[i] == '+') ? +1 : -1;
            i++;
        }
    
        
        while(s[i] == '0'){
            i++;
        }
    
        
        long long int num = 0, l = 1;
        for(int k = i; k < s.length() && s[k] >= '0' && s[k] <= '9'; k++){
            if(num * 10 + (s[k] - '0') >= INT_MAX || (num == INT_MAX/10 && (s[k] - '0') > INT_MAX%100))
            {
                return sign == 1 ? INT_MAX : ((num * 10 + (s[k] - '0') >= 2147483648) ? INT_MIN : (num * 10 + (s[k] - '0'))*sign); 
            }
            num = num * 10 + (s[k] - '0');
            l = k;
        }
        
       
        return num*sign;
    }
};