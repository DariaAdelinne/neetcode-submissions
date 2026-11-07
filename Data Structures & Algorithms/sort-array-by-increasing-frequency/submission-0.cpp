class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> ord;

        for(int num : nums)
            ord[num]++;
        
        sort(nums.begin(), nums.end(), [&](int a, int b)
        {
            if(ord[a] != ord[b])
                return ord[a] < ord[b];
            else
                return a > b;
        });
        return nums;
    }
};