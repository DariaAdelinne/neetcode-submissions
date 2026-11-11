class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, best = 0;
        unordered_map<int, int> seen;
    
        for(int r = 0; r < fruits.size(); r++)
        {
            seen[fruits[r]]++;
            while(seen.size() > 2)
            {
                seen[fruits[l]]--;
                if(seen[fruits[l]] == 0)
                    seen.erase(fruits[l]);
                l++;
            }
            best = max(r - l + 1, best);
        }

        return best;
    }
};