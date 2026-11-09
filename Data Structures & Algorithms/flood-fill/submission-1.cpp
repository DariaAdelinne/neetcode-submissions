class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)
            return image;
        
        dfs(sr, sc, image[sr][sc], image, color);
        return image;
    }

    void dfs(int sr, int sc, int color, vector<vector<int>>& image, int newColor)
    {
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != color)
            return;
        
        image[sr][sc] = newColor;
        dfs(sr + 1, sc, color, image, newColor);
        dfs(sr - 1, sc, color, image, newColor);
        dfs(sr, sc + 1, color, image, newColor);
        dfs(sr, sc - 1, color, image, newColor);
    }
};