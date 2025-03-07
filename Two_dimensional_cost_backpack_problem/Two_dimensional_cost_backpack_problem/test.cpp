
//盈利计划（hard）优化版本
//class Solution {
//public:
//    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//        int m = group.size();
//        vector<vector<int>> dp(n + 1, vector<int>(minProfit + 1));
//        for (int j = 0; j <= n; j++) dp[j][0] = 1;
//        for (int i = 1; i <= m; i++) {
//            for (int j = n; j >= group[i - 1]; j--) {
//                for (int k = minProfit; k >= 0; k--) {
//                    dp[j][k] += dp[j - group[i - 1]][max(0, k - profit[i - 1])];
//                    dp[j][k] %= (int)pow(10, 9) + 7;
//                }
//            }
//        }
//        return dp[n][minProfit];
//    }
//};
//盈利计划（hard）
//class Solution {
//public:
//    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//        int m = group.size();
//        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(minProfit + 1)));
//        for (int j = 0; j <= n; j++) dp[0][j][0] = 1;
//        for (int i = 1; i <= m; i++) {
//            for (int j = 0; j <= n; j++) {
//                for (int k = 0; k <= minProfit; k++) {
//                    dp[i][j][k] = dp[i - 1][j][k];
//                    if (j >= group[i - 1]) {
//                        dp[i][j][k] += dp[i - 1][j - group[i - 1]][max(0, k - profit[i - 1])];
//                        dp[i][j][k] %= (int)pow(10, 9) + 7;
//                    }
//                }
//            }
//
//        }
//        return dp[m][n][minProfit];
//    }
//};
//一和零（medium）优化
//class Solution {
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//        int len = strs.size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        for (int i = 1; i <= len; i++) {
//            int a = 0, b = 0;
//            for (auto ch : strs[i - 1]) {
//                if (ch == '0') a++;
//                else b++;
//            }
//            for (int j = m; j >= a; j--)
//                for (int k = n; k >= b; k--)
//                    dp[j][k] = max(dp[j][k], dp[j - a][k - b] + 1);
//        }
//
//        return dp[m][n];
//    }
//};
//一和零（medium）
//class Solution {
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//        int len = strs.size();
//        vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(m + 1, vector<int>(n + 1)));
//        for (int i = 1; i <= len; i++) {
//            int a = 0, b = 0;
//            for (auto ch : strs[i - 1]) {
//                if (ch == '0') a++;
//                else b++;
//            }
//            for (int j = 0; j <= m; j++) {
//                for (int k = 0; k <= n; k++) {
//                    dp[i][j][k] = dp[i - 1][j][k];
//                    if (j >= a && k >= b)
//                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - a][k - b] + 1);
//                }
//            }
//        }
//
//        return dp[len][m][n];
//    }
//};
//class Solution {
//    typedef pair<int, int> PII;
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//        int len = strs.size();
//        vector<PII> v(len);
//        for (int i = 0; i < len; i++) {
//            for (auto ch : strs[i]) {
//                if (ch == '0') v[i].first++;
//                else v[i].second++;
//            }
//        }
//
//        vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(m + 1, vector<int>(n + 1)));
//        for (int i = 1; i <= len; i++) {
//            for (int j = 0; j <= m; j++) {
//                for (int k = 0; k <= n; k++) {
//                    dp[i][j][k] = dp[i - 1][j][k];
//                    if (j >= v[i - 1].first && k >= v[i - 1].second)
//                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - v[i - 1].first][k - v[i - 1].second] + 1);
//                }
//            }
//        }
//
//        return dp[len][m][n];
//    }
//};
//int main() {
//	Solution s;
//	vector<string> strs = { "10", "0001", "111001", "1", "0" };
//	cout << s.findMaxForm(strs, 5, 3) << endl;
//	return 0;
//}