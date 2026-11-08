class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;

        int l = 0, best = 0;
        for(int r = 0; r < fruits.size(); r++)
        {
            count[fruits[r]]++;
            while(count.size() > 2)
            {
                count[fruits[l]]--;
                if(count[fruits[l]] == 0)
                    count.erase(fruits[l]);
                l++;
            }
            best = max(best, r - l + 1);
        }
        return best;
    }
};