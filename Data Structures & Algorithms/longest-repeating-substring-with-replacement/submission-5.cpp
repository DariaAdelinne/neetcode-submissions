class Solution {
public:
    int characterReplacement(string s, int k) {
    vector<int> count(26, 0);
    int l = 0, best = 0;
    for(int r = 0; r < s.size(); r++)
    {
        count[s[r] - 'A']++;
        while((r - l + 1) - *max_element(count.begin(), count.end()) > k)
        {
            count[s[l] - 'A']--;
            l++;
        }
        best = max(best, r - l + 1);
    }
    return best;
    }
};
