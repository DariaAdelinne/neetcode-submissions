class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> cnt(256, 0);
        int l = 0, best = 0;
        for(int r = 0; r < s.length(); r++)
        {
            cnt[s[r]]++;
            while(cnt[s[r]] > 1)
            {
                cnt[s[l]]--;
                l++;
            }
            best = max(best, r - l + 1);
        }
        return best;
    }
};
