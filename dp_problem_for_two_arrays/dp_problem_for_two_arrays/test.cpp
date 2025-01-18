
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