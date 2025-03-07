#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//一和零（medium）优化版本
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
//完全平方数（medium）优化版本
//class Solution {
//    const int INF = 0x3f3f3f3f;
//public:
//    int numSquares(int n) {
//        int k = sqrt(n);
//        vector<int> dp(n + 1, INF);
//        dp[0] = 0;
//        for (int i = 1; i <= k; i++)
//            for (int j = i * i; j <= n; j++)
//                dp[j] = min(dp[j], dp[j - i * i] + 1);
//        return dp[n];
//    }
//};
//完全平方数（medium）
//class Solution {
//    const int INF = 0x3f3f3f3f;
//public:
//    int numSquares(int n) {
//        int k = pow(n, 0.5);
//        vector<vector<int>> dp(k + 1, vector<int>(n + 1));
//        for (int j = 1; j <= n; j++) dp[0][j] = INF;
//        for (int i = 1; i <= k; i++) {
//            for (int j = 0; j <= n; j++) {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= i * i) dp[i][j] = min(dp[i][j], dp[i][j - i * i] + 1);
//            }
//        }
//        return dp[k][n];
//    }
//};
//零钱兑换II（medium）优化
//class Solution {
//public:
//    int change(int amount, vector<int>& coins) {
//        int n = coins.size();
//        vector<double> dp(amount + 1);
//        dp[0] = 1;
//        for (int i = 1; i <= n; i++)
//            for (int j = coins[i - 1]; j <= amount; j++)
//                dp[j] = dp[j] + dp[j - coins[i - 1]];
//
//        return dp[amount];
//    }
//};

//零钱兑换II（medium）
//class Solution {
//public:
//    int change(int amount, vector<int>& coins) {
//        int n = coins.size();
//        vector<vector<double>> dp(n + 1, vector<double>(amount + 1));
//        dp[0][0] = 1;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 0; j <= amount; j++) {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= coins[i - 1]) dp[i][j] += dp[i][j - coins[i - 1]];
//            }
//        }
//        return dp[n][amount];
//    }
//};
//零钱兑换（medium）优化
//class Solution {
//    const int MAX = 0x3f3f3f3f;
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//        vector<int> dp(amount + 1);
//        for (int j = 1; j <= amount; j++) dp[j] = MAX;
//        for (int i = 1; i <= n; i++)
//            for (int j = coins[i - 1]; j <= amount; j++) {
//                dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
//            }
//        return dp[amount] >= MAX ? -1 : dp[amount];
//    }
//};
//零钱兑换（medium）
//class Solution {
//    const int MAX = 0x3f3f3f3f;
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//        vector<vector<int>> dp(n + 1, vector<int>(amount + 1));
//        for (int j = 1; j <= amount; j++) dp[0][j] = MAX;
//        for (int i = 1; i <= n; i++)
//            for (int j = 0; j <= amount; j++) {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= coins[i - 1])
//                    dp[i][j] = min(dp[i][j], dp[i][j - coins[i - 1]] + 1);
//            }
//        return dp[n][amount] >= MAX ? -1 : dp[n][amount];
//    }
//};
//完全背包（medium）优化版本
//#include <iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//int n, V;
//
//int main() {
//    cin >> n >> V;
//    vector<int> v(n), w(n);
//    for (int i = 0; i < n; i++) {
//        cin >> v[i] >> w[i];
//    }
//    vector<int> dp1(V + 1);
//    for (int i = 1; i <= n; i++)
//        for (int j = v[i - 1]; j <= V; j++)
//            dp1[j] = max(dp1[j], dp1[j - v[i - 1]] + w[i - 1]);
//    cout << dp1[V] << endl;
//
//    vector<int> dp2(V + 1);
//    for (int j = 1; j <= V; j++) dp2[j] = -0x3f3f3f3f;//足够小，涉及减法又不会出现极大数
//    for (int i = 1; i <= n; i++)
//        for (int j = v[i - 1]; j <= V; j++)
//            dp2[j] = max(dp2[j], dp2[j - v[i - 1]] + w[i - 1]);
//    cout << (dp2[V] < 0 ? 0 : dp2[V]) << endl;
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//完全背包（medium）
//#include <iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//int n, V;
//
//int main() {
//    cin >> n >> V;
//    vector<int> v(n), w(n);
//    for (int i = 0; i < n; i++) {
//        cin >> v[i] >> w[i];
//    }
//    vector<vector<int>> dp1(n + 1, vector<int>(V + 1));
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= V; j++) {
//            dp1[i][j] = dp1[i - 1][j];
//            if (j >= v[i - 1]) dp1[i][j] = max(dp1[i][j], dp1[i][j - v[i - 1]] + w[i - 1]);
//        }
//    }
//    cout << dp1[n][V] << endl;
//    vector<vector<int>> dp2(n + 1, vector<int>(V + 1));
//    for (int j = 1; j <= V; j++) dp2[0][j] = -1;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= V; j++) {
//            dp2[i][j] = dp2[i - 1][j];
//            if (j >= v[i - 1] && dp2[i][j - v[i - 1]] != -1)
//                dp2[i][j] = max(dp2[i][j], dp2[i][j - v[i - 1]] + w[i - 1]);
//        }
//    }
//    cout << (dp2[n][V] == -1 ? 0 : dp2[n][V]) << endl;
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")