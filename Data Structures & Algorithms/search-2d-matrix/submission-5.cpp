class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size(), lo = 0, hi = n * m - 1;

        while(lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            int val = matrix[mid / m][mid % m];
            if(val == target)
                return true;
            else if(val < target)
                lo = mid + 1;
            else hi = mid - 1;
        }

        return false;
    }
};
