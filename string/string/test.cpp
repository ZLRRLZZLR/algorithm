#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>

using namespace std;

//字符串相乘（medium）解法一
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0") return "0";
//
//        reverse(num1.begin(), num1.end());
//        reverse(num2.begin(), num2.end());
//        string ret;
//        for (int i = 0; i < num2.size(); i++) {
//            int k = i;
//            string tmp;
//            while (k) {
//                tmp = "0" + tmp;
//                k--;
//            }
//            for (int j = 0; j < num1.size(); j++) {
//                k = (num1[j] - '0') * (num2[i] - '0') + k;
//                tmp += k % 10 + '0';
//                k /= 10;
//            }
//            if (k != 0) tmp += k + '0';
//            ret = stringadd(ret, tmp);
//        }
//        reverse(ret.begin(), ret.end());
//        int i = 0;
//        for (; i < ret.size(); i++) {
//            if (ret[i] != '0') break;
//        }
//
//        return ret.substr(i, ret.size() - i + 1);
//    }
//    string stringadd(string& s1, string& s2) {
//        int cur1 = 0, cur2 = 0, t = 0;
//        string ret;
//        while (cur1 < s1.size() || cur2 < s2.size() || t != 0) {
//            if (cur1 < s1.size()) t = s1[cur1++] - '0' + t;
//            if (cur2 < s2.size()) t = s2[cur2++] - '0' + t;
//            ret += t % 10 + '0';
//            t /= 10;
//        }
//        return ret;
//    }
//};
//int main() {
//
//	string num1 = "9", num2 = "99";  
//	Solution().multiply(num1, num2);    
//	return 0;   
//}

//二进制求和（easy）
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        int i = a.size() - 1, j = b.size() - 1, tmp = 0;
//        string ret;
//        while (i >= 0 || j >= 0 || tmp) {
//            if (i >= 0) tmp += a[i--] - '0';
//            if (j >= 0) tmp += b[j--] - '0';
//            ret += tmp % 2 + '0';
//            tmp /= 2;
//        }
//        reverse(ret.begin(), ret.end());
//
//        return ret;
//    }
//};


//class Solution {
//public:
//    string addBinary(string a, string b) {
//        while (a.size() < b.size()) {
//            a = "0" + a;
//        }
//        while (b.size() < a.size()) {
//            b = "0" + b;
//        }
//        string ret;
//        int tmp = 0;
//        for (int i = a.size() - 1; i >= 0 || tmp != 0; i--) {
//            if (i < a.size()) {
//                tmp = a[i] + b[i] - '0' + tmp;;
//                ret.push_back(tmp / 2);
//                tmp %= 2;
//            }
//            else {
//                ret.push_back(tmp / 2);
//                tmp = 0;
//            }
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};

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

