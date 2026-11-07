class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;

        vector<int> cnt1(26, 0), cnt2(26, 0);
        for(char c : s1)
            cnt1[c - 'a']++;

        int dim = s1.length();
        for (int r = 0; r < s2.length(); r++)
        {
            cnt2[s2[r] - 'a']++;
            if(r >= dim)
                cnt2[s2[r - dim] - 'a']--;
            if(r >= dim - 1 && cnt1 == cnt2)
                return true;
        }
        return false;
    }
};
