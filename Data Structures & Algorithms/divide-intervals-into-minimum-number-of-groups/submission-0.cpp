class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        if(intervals.size() == 1)
            return 1;
        
        vector<int> start(intervals.size()), end(intervals.size());
        for(int i = 0; i < intervals.size(); i++)
        {
            start[i] = intervals[i][0];
            end[i] = intervals[i][1];
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int i = 0, j = 0, groups = 0, res;
        while(i < intervals.size())
        {
            if(start[i] <= end[j])
            {
                groups++;
                i++;
            }
            else
            {
                groups--;
                j++;
            }
            res = max(res, groups);
        }

        return res;
    }
};
