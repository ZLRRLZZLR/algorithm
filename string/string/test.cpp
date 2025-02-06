#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>

using namespace std;



//最长回文子串(medium)
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        int len = 1;
//        int begin = 0;
//        for (int i = 0; i < n; i++) {
//
//            int left = i, right = i + 1;
//            while (left >= 0 && right < n && s[left] == s[right]) {
//                left--;
//                right++;
//            }
//            if (right - left - 1 > len) {
//                len = right - left - 1;
//                begin = left + 1;
//            }
//
//            left = i, right = i;
//            while (left >= 0 && right < n && s[left] == s[right]) {
//                left--;
//                right++;
//            }
//            if (right - left - 1 > len) {
//                len = right - left - 1;
//                begin = left + 1;
//            }
//
//        }
//        return s.substr(begin, len);
//    }
//};

//int main() {
//	string s = "abb";
//	Solution().longestPalindrome(s);
//	return 0;   
//}

//最长公共前缀（easy）
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        for (int i = 0; i < strs[0].size(); i++) {
//            char tmp = strs[0][i];
//            for (int j = 0; j < strs.size(); j++) {
//                if (i == strs[j].size() || tmp != strs[j][i])
//                    return strs[0].substr(0, i);
//            }
//        }
//        return strs[0];
//    }
//};

//最长公共前缀（easy）
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        if (strs.size() == 1) return strs[0];
//
//        string tmp = strs[0];
//        int sum = INT_MAX;
//        for (int i = 1; i < strs.size(); i++) {
//            int s = CommonPrefix(tmp, strs[i]);
//            if (s < sum) sum = s;
//        }
//        return string(strs[0].begin(), strs[0].begin() + sum);
//    }
//    int CommonPrefix(string& str1, string& str2) {
//        int sum = 0;
//        for (int i = 0; i < str1.size() && i < str2.size(); i++) {
//            if (str1[i] != str2[i]) return sum;
//            else sum++;
//        }
//        return sum;
//    }
//};

//int main() {
//
//
//	vector<string> strs = { "flower", "flow", "flight" };   
//    Solution().longestCommonPrefix(strs);
//
//    return 0;
//}

