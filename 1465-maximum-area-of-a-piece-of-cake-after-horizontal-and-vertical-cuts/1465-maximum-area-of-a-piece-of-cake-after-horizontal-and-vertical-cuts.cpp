class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        hc.push_back(0);
        hc.push_back(h);
        vc.push_back(0);
        vc.push_back(w);
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        int maximumh = 0;
        for(int i = 0; i < hc.size()-1; i++){
            maximumh = max(abs(hc[i]-hc[i+1]), maximumh);
        }
        
        int maximumv = 0;
        for(int i = 0; i < vc.size()-1; i++){
            maximumv = max(abs(vc[i]-vc[i+1]), maximumv);
        }
        
        int M = 1000000007;
        return (1LL* maximumh * maximumv)%M;
    }
};