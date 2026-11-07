class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int num : nums)
            count[num]++;
        
        vector<pair<int,int>> arr;
        for (auto& [val, cnt] : count)
            arr.push_back({val, cnt});
        
        sort(arr.begin(), arr.end(), [](pair<int,int> a, pair<int,int> b)
        {
            return a.second > b.second;
        });

        vector<int> result;
        for(int i = 0; i < k; i++)
        {
            result.push_back(arr[i].first);
        }

        return result;
    }
};