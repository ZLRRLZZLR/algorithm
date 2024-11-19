//下降路径最小和（medium）
//class Solution {
//public:
//    int minFallingPathSum(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//
//        vector<vector<int>> dp(n + 1, vector<int>(n + 2, INT_MAX));
//        for (int i = 0; i < n + 2; i++)
//        {
//            dp[0][i] = 0;
//        }
//
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                int Min = min(dp[i - 1][j - 1], dp[i - 1][j]);
//                Min = min(Min, dp[i - 1][j + 1]);
//                dp[i][j] = min(min(dp[i - 1][j - 1], dp[i - 1][j]), dp[i - 1][j + 1]) + matrix[i - 1][j - 1];
//            }
//        }
//        int ret = INT_MAX;
//
//        for (int i = 1; i <= n; i++)
//        {
//            ret = min(ret, dp[n][i]);
//        }
//
//        return ret;
//    }
//};
//不同路径II（medium）
// class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        int m = obstacleGrid.size();
//        int n = obstacleGrid[0].size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//
//        dp[0][1] = 1;
//
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//                if (obstacleGrid[i - 1][j - 1] == 1)
//                    dp[i][j] = 0;
//            }
//        }
//        return dp[m][n];
//    }
//};
//不同路径（medium）
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        dp[0][1] = 1;
//
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//
//        return dp[m][n];
//
//    }
//};