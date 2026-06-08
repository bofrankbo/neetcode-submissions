class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;

        int low = prices[0];

        int profit = 0;

        while (r < prices.size()){
            if (prices[r] - low > 0){
                profit = max(profit, prices[r]-low);
                // cout << profit << " r:" << prices[r] << " l:" << low << endl;
            }

            if (prices[r] < low){
                low = prices[r];
            }
            r++;
            
        }
        return profit;
    }
};
