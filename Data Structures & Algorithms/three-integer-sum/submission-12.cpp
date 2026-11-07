class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int l, r, sum = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i + 2 < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            l = i + 1;
            r = nums.size() - 1;
            while (l < r)
            {
                sum = nums[i] + nums[l] + nums[r];
                if (sum < 0)
                    l++;
                else if(sum > 0)
                    r--;
                else { result.push_back({nums[i], nums[l], nums[r]}); r--; l++;
                while(l < r && nums[l] == nums[l - 1])
                    l++;
                }
            }
        }
        return result;
    }
};
