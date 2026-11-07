class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;

        int min = INT_MAX, max = 0;
        for(int i = 0; i < prices.size() - 1; i++)
        {
            if(min > prices[i])
                min = prices[i];
            if(prices[i + 1] - min > max && prices[i+1] - min >= 0)
                max = prices[i + 1] - min;
        } 
        return max;
    }
};
