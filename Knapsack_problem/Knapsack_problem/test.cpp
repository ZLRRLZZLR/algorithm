#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
#include<unordered_set>

using namespace std;

//分割等和子集（medium）优化版
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        for (auto i : nums) sum += i;
//        if (sum % 2 != 0) return false;
//        int n = nums.size();
//        sum /= 2;
//        vector<bool> dp(sum + 1);
//        dp[0] = true;
//        for (int i = 1; i <= n; i++)
//            for (int j = sum; j >= nums[i - 1]; j--)
//                dp[j] = dp[j] || dp[j - nums[i - 1]];
//        return dp[sum];
//    }
//};
//分割等和子集（medium）
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        for (auto i : nums) sum += i;
//        if (sum % 2 != 0) return false;
//        int n = nums.size();
//        sum /= 2;
//        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));
//        for (int i = 0; i <= n; i++) dp[i][0] = true;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= sum; j++) {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= nums[i - 1]) dp[i][j] = dp[i][j] || dp[i - 1][j - nums[i - 1]];
//            }
//        }
//
//        return dp[n][sum];
//    }
//};
//01 背包（medium）滚动数组优化
//#include <iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//
//int n, V;
//vector<int> dp(1002);
//typedef pair<int, int> PII;
//
//class Solution {
//public:
//    int MAXVA(vector<PII>& number) {
//        int n = number.size();
//        for (int i = 1; i <= n; i++) {
//            for (int j = V; j - number[i].first >= 0; j--) {
//                dp[j] = max(dp[j], number[i].second + dp[j - number[i].first]);
//            }
//        }
//
//        return dp[V];
//    }
//
//    int MAXVO(vector<PII>& number) {
//        int n = number.size();
//        for (int j = 1; j <= V; j++) dp[j] = -1;
//
//        for (int i = 1; i <= n; i++) {
//            for (int j = V; j - number[i].first >= 0; j--) {
//                dp[j] = dp[j];
//                if (dp[j - number[i].first] != -1)
//                    dp[j] = max(dp[j], number[i].second + dp[j - number[i].first]);
//            }
//        }
//        return dp[V] == -1 ? 0 : dp[V];
//    }
//
//};
//
//int main() {
//
//    cin >> n >> V;
//    vector<PII> number(n + 1);
//    for (int i = 1; i <= n; i++) { // 注意 while 处理多个 case
//        cin >> number[i].first >> number[i].second;
//    }
//
//    cout << Solution().MAXVA(number) << endl;
//    cout << Solution().MAXVO(number) << endl;
//    return 0;
//}
// 64 位输出请用 printf("%lld")
// 1. 0-1背包问题
//#include <iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//
//int n, V;
//vector<vector<int>> dp(1002, vector<int>(1002));
//typedef pair<int, int> PII;
//
//class Solution {
//public:
//    int MAXVA(vector<PII>& number) {
//        int n = number.size();
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= V; j++) {
//                dp[i][j] = dp[i - 1][j];
//                if (j - number[i].first >= 0) dp[i][j] = max(dp[i][j], number[i].second + dp[i - 1][j - number[i].first]);
//            }
//        }
//
//        return dp[n][V];
//    }
//
//    int MAXVO(vector<PII>& number) {
//        int n = number.size();
//        for (int j = 1; j <= V; j++) dp[0][j] = -1;
//
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= V; j++) {
//                dp[i][j] = dp[i - 1][j];
//                if (j - number[i].first >= 0 && dp[i - 1][j - number[i].first] != -1)
//                    dp[i][j] = max(dp[i][j], number[i].second + dp[i - 1][j - number[i].first]);
//            }
//        }
//        return dp[n][V] == -1 ? 0 : dp[n][V];
//    }
//
//};
//
//int main() {
//
//    cin >> n >> V;
//    vector<PII> number(n + 1);
//    for (int i = 1; i <= n; i++) { // 注意 while 处理多个 case
//        cin >> number[i].first >> number[i].second;
//    }
//
//    cout << Solution().MAXVA(number) << endl;
//    cout << Solution().MAXVO(number) << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

