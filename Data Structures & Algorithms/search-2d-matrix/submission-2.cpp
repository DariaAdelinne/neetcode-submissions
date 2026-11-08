class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(),lo = 0, hi = n - 1, mid, i = 0;
        while(i < m && (target < matrix[i][0] || target > matrix[i][n-1]))
            i++;
        
        if(i == m)
            return false;

        while(lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if(matrix[i][mid] == target)
                return true;
            else if (matrix[i][mid] < target)
                lo = mid + 1;
                else hi = mid - 1;
        }
            
        return false;
    }
};
