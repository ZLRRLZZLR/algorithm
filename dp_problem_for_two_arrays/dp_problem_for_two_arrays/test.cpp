#include<iostream>
#include<vector>
#include<string>

using namespace std;

//最长重复子数组（medium）
//class Solution {
//public:
//    int findLength(vector<int>& nums1, vector<int>& nums2) {
//        int m = nums1.size();
//        int n = nums2.size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        int ret = 0;
//        for (int i = 1; i <= m; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (nums1[i - 1] == nums2[j - 1])
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//
//                ret = max(ret, dp[i][j]);
//            }
//        }
//        return ret;
//    }
//};
//两个字符串的最小 ASCII 删除和（medium）
//class Solution {
//public:
//    int minimumDeleteSum(string s1, string s2) {
//        int m = s1.size();
//        int n = s2.size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        for (int i = 1; i <= m; i++) {
//            for (int j = 1; j <= n; j++) {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                if (s1[i - 1] == s2[j - 1]) dp[i][j] = max(dp[i - 1][j - 1] + s1[i - 1], dp[i][j]);
//            }
//        }
//        int sum = 0;
//        for (auto ch : s1) sum += ch;
//        for (auto ch : s2) sum += ch;
//
//        return sum - dp[m][n] * 2;
//    }
//};
//交错字符串（medium）
//class Solution {
//public:
//    bool isInterleave(string s1, string s2, string s3) {
//        int m = s1.size(), n = s2.size();
//        if (m + n != s3.size()) return false;
//        s1 = " " + s1;
//        s2 = " " + s2;
//        s3 = " " + s3;
//        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1));
//        dp[0][0] = true;
//        for (int j = 1; j <= n; j++) {
//            if (s2[j] == s3[j]) dp[0][j] = true;
//            else break;
//        }
//        for (int i = 1; i <= m; i++) {
//            if (s1[i] == s3[i]) dp[i][0] = true;
//            else break;
//        }
//
//        for (int i = 1; i <= m; i++) {
//            for (int j = 1; j <= n; j++) {
//                dp[i][j] = (s1[i] == s3[i + j] && dp[i - 1][j]) || (s2[j] == s3[i + j] && dp[i][j - 1]);
//            }
//        }
//
//        return dp[m][n];
//    }
//};
//
//int main() {
//	string s1 = "aabcc";
//	string s2 = "dbbca";
//	string s3 = "aadbbcbcac";
//	Solution().isInterleave(s1, s2, s3);
//	return 0;
//}

//正则表达式匹配（hard）
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        int m = s.size();
//        int n = p.size();
//        s = " " + s;
//        p = " " + p;
//        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1));
//        dp[0][0] = true;
//        for (int j = 2; j <= n; j += 2) {
//            if (p[j] == '*') dp[0][j] = true;
//			else break;
//        }
//
//        for (int i = 1; i <= m; i++) {
//            for (int j = 1; j <= n; j++) {
//                if ((p[j] >= 'a' && p[j] <= 'z') || p[j] == '.')
//                    dp[i][j] = (p[j] == s[i] || p[j] == '.') && dp[i - 1][j - 1];
//                else
//                    dp[i][j] = dp[i][j - 2] || (p[j - 1] == '.' || p[j - 1] == s[i]) && dp[i - 1][j];
//            }
//        }
//
//        return dp[m][n];
//    }
//};
//
//int main() {
//	string s = "aa";
//	string p = "a";
//	Solution().isMatch(s, p);
//	return 0;
//}
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