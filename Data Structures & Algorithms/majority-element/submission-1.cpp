class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int best = 0, maxFreq = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]] > maxFreq)
            {
                maxFreq = freq[nums[i]];
                best = nums[i];
            }
        }

        return best;
    }
};