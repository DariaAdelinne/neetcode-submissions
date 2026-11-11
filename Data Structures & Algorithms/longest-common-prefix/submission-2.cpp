class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), [](string a, string b){
            return a.size() < b.size();
        });

        string copy = strs[0];
        for(int i = 0; i < copy.size(); i++)
        {
            for(int j = 0; j < strs.size(); j++)
            {
                if(copy[i] != strs[j][i])
                    return copy.substr(0, i);
            }
        }

        return copy;
    }
};