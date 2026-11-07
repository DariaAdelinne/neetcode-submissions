class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        unordered_map <char,int> freq;
        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for (auto& [val, cont] : freq)
            if (cont != 0)
                return false;
        
        return true;
    }
};
