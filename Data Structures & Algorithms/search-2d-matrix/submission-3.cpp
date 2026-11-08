class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(),lo = 0, hi = n * m - 1, mid, val;

        while(lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            val = matrix[mid / n][mid % n];
            if(val == target)
                return true;
            else if (val < target)
                lo = mid + 1;
            else hi = mid - 1;
        }

        return false;
    }
};
