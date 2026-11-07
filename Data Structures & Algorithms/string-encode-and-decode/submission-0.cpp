class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(string& str : strs)
        {
            result += to_string(str.size()) + "#" + str;
        }
        return result;
    }

    vector<string> decode(string s) {
       vector<string> result;
       int i = 0, j, len;
       while (i < s.size())
       {
            j = s.find("#", i);
            len = stoi(s.substr(i, j - i));
            result.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
       }
       return result;
    }
};
