class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size() == h)
            return *max_element(piles.begin(), piles.end());

        int ora = 0, lo = 1, hi = *max_element(piles.begin(), piles.end()), mid;

        while(lo < hi)
        {
            mid = lo + (hi - lo) / 2;
            ora = 0;
            for(int pile : piles)
                ora += (pile + mid - 1) / mid;
            
            if(ora <= h)
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;

    }
};
