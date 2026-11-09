class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int best = 0, sum = 0;

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                    dfs(i, j, grid, sum = 0);
                best = max(best, sum);
            }
        }
        return best;
    }

    void dfs(int i, int j, vector<vector<int>>& grid, int& sum)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1)
            return;
        
        grid[i][j] = 0;
        sum++;
        dfs(i + 1, j, grid, sum);
        dfs(i - 1, j, grid, sum);
        dfs(i, j - 1, grid, sum);
        dfs(i, j + 1, grid, sum);
    }
};
