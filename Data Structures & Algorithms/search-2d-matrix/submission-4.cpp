class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0, hi = matrix.size() * matrix[0].size() - 1;
        int n = matrix.size(), m = matrix[0].size();
        while(lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            int val = matrix[mid / m][mid % m];
            if(val == target)
            {
                return true;
            }
            else if(val < target)
            {
                lo = mid + 1;
            }
            else hi = mid - 1;
        }

        return false;
    }
};
