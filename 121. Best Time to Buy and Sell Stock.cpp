121. Best Time to Buy and Sell Stock
Easy

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxProfit = 0;
        for(int i=1;i<n;i++){
            int cost = prices[i]-mini;
            maxProfit = max(maxProfit,cost);
            mini = min(mini,prices[i]);
        }
        return maxProfit;
        //  if (prices.size() == 1) return 0;

        // int low = 0;
        // int maxprofit = 0;

        // for (int i = 0; i < prices.size(); ++i) {
        //     if (prices[i] < prices[low]) {
        //         low = i;
        //         continue;
        //     }
        //     maxprofit= max(maxprofit, prices[i] - prices[low]);
        // }
        // return maxprofit;
        
    }
};
