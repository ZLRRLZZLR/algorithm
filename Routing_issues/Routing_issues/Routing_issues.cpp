

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