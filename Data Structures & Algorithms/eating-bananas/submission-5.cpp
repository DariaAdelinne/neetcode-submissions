class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size() == h)
            return *max_element(piles.begin(), piles.end());
        int lo = 1, hi = *max_element(piles.begin(), piles.end());

        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;
            int ore = 0;
            for(int pile : piles)
                ore += (pile + mid - 1) / mid;
            if (ore <= h)
                hi = mid;
            else
                lo = mid + 1;
        }

        return lo;
    }
};
