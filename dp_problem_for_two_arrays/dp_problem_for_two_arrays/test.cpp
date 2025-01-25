#include<iostream>
#include<vector>
#include<string>

using namespace std;

//通配符匹配（hard）
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        s = " " + s;
//        p = " " + p;
//        int m = s.size();
//        int n = p.size();
//        vector<vector<bool>> dp(m, vector<bool>(n));
//        dp[0][0] = true;
//        for (int i = 1; i < n; i++) {
//            if (p[i] == '*')
//                dp[0][i] = true;
//            else break;
//        }
//
//        for (int i = 1; i < m; i++) {
//            for (int j = 1; j < n; j++) {
//                if (p[j] == '?')
//                    dp[i][j] = dp[i - 1][j - 1];
//                else if (p[j] == '*')
//                    dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
//                else
//                    dp[i][j] = (s[i] == p[j]) && dp[i - 1][j - 1];
//            }
//        }
//
//        return dp[m - 1][n - 1];
//    }
//};
//
//int main() {
//
//    string s = "aa";
//    string p = "*";
//
//    Solution().isMatch(s,p);
//    return 0;
//}
//不同的子序列（hard）
//class Solution {
//public:
//    int numDistinct(string s, string t) {
//        s = " " + s;
//        t = " " + t;
//        long long n = s.size(), m = t.size();
//        vector<vector<double>> dp(m, vector<double>(n));
//        for (int j = 0; j < n; j++) dp[0][j] = 1;
//
//        for (int i = 1; i < m; i++) {
//            for (int j = 1; j < n; j++) {
//                dp[i][j] = dp[i][j - 1];
//                if (t[i] == s[j])
//                    dp[i][j] += dp[i - 1][j - 1];
//            }
//        }
//
//        return dp[m - 1][n - 1];
//    }
//};

//int main() {
//
//    string s = { "rabbbit" };
//    string t = { "rabbit" };
//
//    Solution().numDistinct(s,t);
//    return 0;
//}

//最长公共子序列（medium）
//class Solution {
//public:
//    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
//        int size1 = nums1.size();
//        int size2 = nums2.size();
//        vector<vector<int>> dp(size1 + 1, vector<int>(size2 + 1));
//        for (int i = 1; i <= size1; i++) {
//            for (int j = 1; j <= size2; j++) {
//                if (nums1[i - 1] == nums2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
//                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//        return dp[size1][size2];
//    }
//};
//最长公共子序列（medium）
//class Solution {
//public:
//    int longestCommonSubsequence(string text1, string text2) {
//        text1 = " " + text1;
//        text2 = " " + text2;
//        int len1 = text1.size();
//        int len2 = text2.size();
//        vector<vector<int>> dp(len1, vector<int>(len2));
//        for (int i = 1; i < len1; i++) {
//            for (int j = 1; j < len2; j++) {
//                if (text1[i] == text2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
//                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//        return dp[len1 - 1][len2 - 1];
//
//    }
//};