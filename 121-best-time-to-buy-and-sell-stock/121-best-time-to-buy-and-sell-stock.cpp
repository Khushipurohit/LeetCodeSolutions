class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int buy=INT_MAX,sell=0;
        for(int i=0;i<prices.size();i++){
            buy=std::min(buy,prices[i]);
            sell=std::max(sell,prices[i]-buy);
        }
       return sell;
    }
};