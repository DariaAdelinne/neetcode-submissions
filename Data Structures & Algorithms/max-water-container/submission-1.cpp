class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1, best = 0, water;
        while (l < r)
        {
            water = min(heights[l], heights[r]) * (r - l);
            best = max(best, water);
            if(heights[l] < heights[r])
                l++;
            else
                r--;
        }
        return best;
    }
};
