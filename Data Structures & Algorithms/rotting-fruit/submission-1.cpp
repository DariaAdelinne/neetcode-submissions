class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int fresh = 0;

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                    fresh++;
                else if(grid[i][j] == 2)
                    q.push({i,j});
            }
        }

        vector<pair<int,int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int time = 0;
        while(!q.empty() && fresh > 0)
        {
            int len = q.size();
            for(int i = 0; i < len; i++)
            {
                auto curr = q.front();
                q.pop();
                int r = curr.first;
                int c = curr.second;

                for(const auto& direction : directions)
                {
                    int row = r + direction.first;
                    int col = c + direction.second;

                    if(row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && grid[row][col] == 1)
                    {
                        grid[row][col] = 2;
                        q.push({row,col});
                        fresh--;
                    }
                }
            }
            time++;
        }

        return fresh ? -1 : time;

    }
};
