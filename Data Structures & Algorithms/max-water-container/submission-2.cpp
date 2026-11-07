class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1, maxAmount = 0;
        while(l < r)
        {
            maxAmount = max((r - l) * min(heights[l], heights[r]), maxAmount);
            if(heights[l] < heights[r])
                l++;
            else
                r--;
        }
        return maxAmount;
    }
};
