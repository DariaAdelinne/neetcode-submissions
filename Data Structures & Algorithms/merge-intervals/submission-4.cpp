class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(auto interval : intervals)
        {
            int c = interval[0];
            int d = interval[1];

            if(c <= res.back()[1])
                res.back()[1] = max(res.back()[1], d);
            else res.push_back(interval);
        }

        return res;
    }
};
