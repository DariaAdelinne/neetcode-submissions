class Solution {
public:
    string longestPalindrome(string s) {
        int bestLen = 0, bestStart = 0;
        for(int i = 0; i < s.size(); i++)
        {
            for(int k = 0; k < 2; k++)
            {
                int r = i + k;
                int l = i;

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
