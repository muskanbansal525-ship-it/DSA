class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit =0;
        int minprofit = prices[0];
         for(int i =0; i<=prices.size()-1; i++){
            maxprofit = max(maxprofit,prices[i]-minprofit);
            minprofit = min(minprofit, prices[i]);
         }
         return maxprofit;
    }
};