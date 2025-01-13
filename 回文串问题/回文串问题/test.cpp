#include<iostream>
#include<string>
#include<vector>
using namespace std;


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
//    int countSubstrings(string s) {
//        int n = s.size();
//        int ret = 0;
//        vector<vector<int>> dp(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i; j < n; j++) {
//                if (i == j) dp[i][j] = true;
//                else if (s[i] == s[j] && i + 1 == j) dp[i][j] = true;
//                else if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
//                if (dp[i][j]) ret++;
//            }
//        }
//        return ret;
//    }
//};
//
//int main() {
//    Solution().countSubstrings("abc");
//    return 0;
//}