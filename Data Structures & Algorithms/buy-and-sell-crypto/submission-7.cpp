class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxPrice = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if(minPrice > prices[i])
                minPrice = prices[i];
            if(maxPrice < prices[i] - minPrice)
                maxPrice = prices[i] - minPrice;
        }
        return maxPrice;
    }
};
