class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> seen(256, 0);
        int l = 0, best = 0;

        for(int r = 0; r < s.size(); r++)
        {
            seen[s[r]]++;
            while(seen[s[r]] > 1)
            {
                seen[s[l]] --;
                l++;
            } 
            best = max(best, r - l + 1);
        }

        return best;
    }
};
