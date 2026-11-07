class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxFreq = 0, res;
        for(int num: nums)
        {
            freq[num]++;
            if(maxFreq < freq[num])
            {
                maxFreq = freq[num];
                res = num;
            }
        }
        return res;
    }
};