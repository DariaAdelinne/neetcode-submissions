class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0], curMin = nums[0], best = nums[0], x, a, b;

        for(int i = 1; i < nums.size(); i++)
        {
            x = nums[i];
            a = curMax * x;
            b = curMin * x;

            curMax = max(x, max(a, b));
            curMin = min(x, min(a, b));
            best = max(best, curMax);
        }
        return best;
    }
};
