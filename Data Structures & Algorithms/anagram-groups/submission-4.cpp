class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (auto& x : strs)
        {
            string copy = x;
            sort(copy.begin(), copy.end());
            groups[copy].push_back(x);
        }

        vector<vector<string>> result;
        for (auto& [key, val] : groups)
            result.push_back(val);

        return result;
    }
};
