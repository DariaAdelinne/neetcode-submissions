class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start(intervals.size()), finish(intervals.size());

        for(int i = 0; i < intervals.size(); i++)
        {
            start[i] = intervals[i][0];
            finish[i] = intervals[i][1];
        }

        sort(start.begin(), start.end());
        sort(finish.begin(), finish.end());

        int i = 0, j = 0, res = 0, count = 0;
        while (i < intervals.size())
        {
            if(start[i] <= finish[j])
            {
                count++;
                i++;
            }
            else
            {
                count--;
                j++;
            }

            res = max(res, count);
        }

        return res;
    }
};
