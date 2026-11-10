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
                    q.push({i, j});
            }
        }

        vector<pair<int,int>> directions = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        int time = 0;
        while(!q.empty() && fresh > 0)
        {
            int len = q.size();
            for(int i = 0; i < len; i++)
            {
                auto cur = q.front();
                q.pop();
                int r = cur.first;
                int c = cur.second;

                for(auto direction : directions)
                {
                    int row = r + direction.first;
                    int col = c + direction.second;

                    while(row >= 0 && col >= 0 && col < grid[0].size() && row < grid.size() && grid[row][col] == 1)
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
