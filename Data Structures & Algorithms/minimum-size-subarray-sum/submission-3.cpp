class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, minLength = INT_MAX, sum = 0;
        for (int r = 0; r < nums.size(); r++)
        {
            sum += nums[r];
            while(sum >= target)
            {
                minLength = min(minLength, r - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        if(minLength == INT_MAX)
            return 0;
        return minLength;
    }
};