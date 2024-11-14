

//使用最小花费爬楼梯（easy）解法一
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        int n = cost.size();
//        vector<int> dp(n + 1);
//
//        for (int i = 2; i <= n; i++)
//        {
//            int num1 = dp[i - 1] + cost[i - 1];
//            int num2 = dp[i - 2] + cost[i - 2];
//
//            if (num1 > num2)
//            {
//                dp[i] = num2;
//            }
//            else
//            {
//                dp[i] = num1;
//            }
//        }
//
//        return dp[n];
//    }
//};
//三步问题（easy）
//class Solution {
//public:
//    int waysToStep(int n) {
//        if (n == 1 || n == 2) return n;
//        if (n == 3) return 4;
//
//        vector<int> dp(n + 1);
//
//        const int MOD = 1e9 + 7;
//
//        dp[0] = 1, dp[1] = 1, dp[2] = 2, dp[3] = 4;
//
//        for (int i = 4; i <= n; i++)
//        {
//            dp[i] = ((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD;
//        }
//
//        return dp[n];
//    }
//};

////第 N 个泰波那契数（easy）
//class Solution {
//public:
//    int tribonacci(int n) {
//        if (n == 0) return 0;
//        if (n == 1 || n == 2) return 1;
//
//        int a = 0, b = 1, c = 1, d = 0;
//        for (int i = 3; i <= n; i++)
//        {
//            d = a + b + c;
//            a = b;
//            b = c;
//            c = d;
//        }
//
//        return d;
//    }
//};