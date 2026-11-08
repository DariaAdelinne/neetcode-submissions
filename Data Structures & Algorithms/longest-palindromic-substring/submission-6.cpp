class Solution {
public:
    string longestPalindrome(string s) {
        int bestStart = 0, bestLen = 0, l, r;

        for(int i = 0; i < s.size(); i++)
        {
            for(int k = 0; k < 2; k++)
            {
                l = i;
                r = i + k;
                while(l >= 0 && r < s.size() && s[l] == s[r])
                {
                    l--;
                    r++;
                }
                if(r - l - 1 > bestLen)
                {
                    bestLen = r - l - 1;
                    bestStart = l + 1;
                }
            }
        }
        return s.substr(bestStart, bestLen);
    }
};
