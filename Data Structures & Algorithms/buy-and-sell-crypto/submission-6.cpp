class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrices = INT_MAX, maxPrices = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if(minPrices > prices[i])
                minPrices = prices[i];
            if(maxPrices < prices[i] - minPrices)
                maxPrices = prices[i] - minPrices;
        }
        return maxPrices;
    }
};
