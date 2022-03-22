class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=t.size();
        int n1=s.size();
        for(int i=0; i<n1; i++)
		t[i+1] += t[i] - s[i];
      return t[n-1];
    }
};