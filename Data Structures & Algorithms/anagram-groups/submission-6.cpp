class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> groups;
        string copy; 
        for(string s : strs)
        {
            copy = s;
            sort(copy.begin(), copy.end());

            groups[copy].push_back(s);
        }

        for(auto [key, val] : groups)
        {
            res.push_back({val});
        }

        return res;
    }
};
