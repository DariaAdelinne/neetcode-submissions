class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int lo, hi, sum;

        vector<vector<int>> res;
        for(int i = 0; i + 2 < nums.size(); i++)
        {
            if( i > 0 && nums[i] == nums[i - 1])
                continue;
            lo = i + 1;
            hi = nums.size() - 1;

            while(lo < hi)
            {
                sum = nums[i] + nums[lo] + nums[hi];
                if(sum == 0)
                {
                    res.push_back({nums[i], nums[lo], nums[hi]});
                    lo++;
                    hi--;
                    while(lo < hi && nums[lo] == nums[lo - 1])
                        lo++;
                }
                else if(sum < 0)
                    lo++;
                    else hi--;
            }
        }

        return res;
    }
};
