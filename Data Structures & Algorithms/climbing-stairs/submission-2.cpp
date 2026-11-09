class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);
        return dfs(n, 0, memo);
    }

    int dfs(int n, int i, vector<int>& memo)
    {
        if(i >= n)
            return i == n;

        if(memo[i] != -1)
            return memo[i];
        
        return memo[i] = dfs(n, i + 1, memo) + dfs(n, i + 2, memo);
    }
};
