class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        string copy;
        for(int i = 0; i < strs.size(); i++)
        {
            copy = strs[i];
            sort(copy.begin(), copy.end());
            groups[copy].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto& [key, words] : groups)
        {
            result.push_back(words);
        }

        return result;
    }
};
