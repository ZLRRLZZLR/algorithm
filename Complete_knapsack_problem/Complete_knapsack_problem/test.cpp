#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

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