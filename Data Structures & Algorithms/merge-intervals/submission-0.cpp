class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        res.push_back(intervals[0]);

        int c, d;
        for(int i = 1; i < intervals.size(); i++)
        {
            c = intervals[i][0];
            d = intervals[i][1];

            if(c <= res.back()[1])
                res.back()[1] = max(res.back()[1], d);
            else 
                res.push_back(intervals[i]);
        }

        return res;
    }
};
