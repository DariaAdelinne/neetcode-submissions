class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> cnt(26, 0);
        int l = 0, best = 0;
        for(int r = 0; r < s.length(); r++)
        {
            cnt[s[r] - 'A']++;
            while((r - l + 1) - *max_element(cnt.begin(),cnt.end()) > k)
            {
                cnt[s[l] - 'A']--;
                l++;
            }
            best = max(best, r - l + 1);
        }
        return best;
    }
};
