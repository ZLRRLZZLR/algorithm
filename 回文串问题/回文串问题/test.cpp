#include<iostream>
#include<string>
#include<vector>
using namespace std;

//让字符串成为回文串的最小插入次数（hard）
//class Solution {
//public:
//    int minInsertions(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i + 1; j < n; j++) {
//                if (s[i] == s[j]) {
//                    if (i + 1 < j) {
//                        dp[i][j] = dp[i + 1][j - 1];
//                    }
//                }
//                else {
//                    dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1;
//                }
//            }
//        }
//        return dp[0][n - 1];
//    }
//};

//最长回文子序列（medium）
//class Solution {
//public:
//    int longestPalindromeSubseq(string s) {
//        int n = s.size();
//        vector<vector<int>> ret(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--) {
//            ret[i][i] = 1;
//            for (int j = i + 1; j < n; j++) {
//                if (s[i] == s[j]) ret[i][j] = ret[i + 1][j - 1] + 2;
//                else ret[i][j] = max(ret[i + 1][j], ret[i][j - 1]);
//            }
//        }
//        return ret[0][n - 1];
//    }
//};
//分割回文串II（hard）
//class Solution {
//public:
//    int minCut(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i; j < n; j++) {
//                if (s[i] == s[j]) i + 1 >= j ? dp[i][j] = true : dp[i][j] = dp[i + 1][j - 1];
//            }
//        }
//
//        vector<int> ret(n, INT_MAX);
//        for (int i = 0; i < n; i++) {
//            if (dp[0][i]) ret[i] = 0;
//            else {
//                for (int j = 1; j <= i; j++) {
//                    if (dp[j][i]) ret[i] = min(ret[j - 1] + 1, ret[i]);
//                }
//            }
//        }
//
//        return ret[n - 1];
//    }
//};
//int main() {
//
//    return 0;
//}
//回文串分割IV（hard）
//class Solution {
//public:
//    bool checkPartitioning(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i; j < n; j++) {
//                if (i == j) dp[i][j] = true;
//                else if (s[i] == s[j] && i + 1 == j) dp[i][j] = true;
//                else if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
//            }
//        }
//        for (int i = 1; i <= n - 2; i++) {
//            for (int j = i; j <= n - 2; j++) {
//                if (dp[0][i - 1] && dp[i][j] && dp[j + 1][n - 1])
//                    return true;
//            }
//        }
//        return false;
//    }
//};
//最长回文子串（medium）
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        int len = 0, left = 0, right = 0;
//        vector<vector<int>> dp(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i; j < n; j++) {
//                if (i == j) dp[i][j] = true;
//                else if (s[i] == s[j] && i + 1 == j) dp[i][j] = true;
//                else if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
//                if (dp[i][j] && (j - i + 1 > len))
//                {
//                    left = i;
//                    len = j - i + 1;
//                }
//            }
//        }
//        return s.substr(left, len);
//    }
//};
//回文子串
//class Solution {
//public:
    //int countSubstrings(string s) {
    //    int n = s.size();
    //    int ret = 0;
    //    vector<vector<int>> dp(n, vector<int>(n));
    //    for (int i = n - 1; i >= 0; i--) {
    //        for (int j = i; j < n; j++) {
    //            if (i == j) dp[i][j] = true;
    //            else if (s[i] == s[j] && i + 1 == j) dp[i][j] = true;
    //            else if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
    //            if (dp[i][j]) ret++;
    //        }
    //    }
    //    return ret;
    //}
//};
//
//int main() {
//    Solution().countSubstrings("abc");
//    return 0;
//}