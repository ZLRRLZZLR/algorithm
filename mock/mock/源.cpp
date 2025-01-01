#include<iostream>
#include<string>
using namespace std;


//外观数列 (medium)
//class Solution {
//public:
//    string countAndSay(int n) {
//        n = n - 1;
//        string countAndSay = "1";
//        for (int i = 0; i < n; i++) {
//            int left = 0, right = 0, len = countAndSay.size();
//            string s;
//            while (right < len) {
//                while (right < len && countAndSay[left] == countAndSay[right]) {
//                    right++;
//                }
//                s += right - left + '0';
//                s += countAndSay[left];
//                left = right;
//            }
//            countAndSay = s;
//        }
//        return countAndSay;
//    }
//};
//
//int main() {
//
//    Solution().countAndSay(4);
//    return 0;
//}

//class Solution {
//public:
//    string countAndSay(int n) {
//        string countAndSay = '1';
//        for (int i = 0; i < n; i++) {
//            int left = 0, right = 0, len = countAndSay().size();
//            for (int left = 0, right = 0; right < len) {
//                while (right < len && s[left] == s[right]) {
//                    right++;
//                }
//                s += right - left + '0';
//                s += countAndSay[left] + '0';
//            }
//            countAndSay = s;
//        }
//
//    }
//};
//N 字形变换（medium）
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        if (numRows == 1)
//            return s;
//        string ret;
//        int d = 2 * numRows - 2, n = s.size();
//        for (int i = 0; i < numRows; i++) {
//            int j = i;
//            if (i == 0) {
//                while (j < n) {
//                    ret += s[j];
//                    j += d;
//                }
//            }
//            else if (i == numRows - 1) {
//                while (j < n) {
//                    ret += s[j];
//                    j += d;
//                }
//            }
//            else {
//                int k = d - j;
//                while (j < n || k < n) {
//                    if (j < n)
//                        ret += s[j];
//                    if (k < n)
//                        ret += s[k];
//                    j += d;
//                    k += d;
//                }
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        if (numRows == 1)
//            return s;
//        string ret;
//        int d = 2 * numRows - 2, n = s.size();
//        for (int i = 0; i < numRows; i++) {
//            int j = i;
//            if (i == 0) {
//                while (j < n) {
//                    ret += s[j];
//                    j += d;
//                }
//                break;
//            }
//            else if (i == numRows - 1) {
//                while (j < n) {
//                    ret += s[j];
//                    j += d;
//                }
//                break;
//            }
//            else {
//                int k = d - j;
//                while (j < n || k < n) {
//                    ret += s[j];
//                    ret += s[k];
//                    j += d;
//                    k += d;
//                }
//            }
//        }
//        return ret;
//    }
//};
//
//int main() {
//
//    string s = "PAYPALISHIRING";
//    Solution().convert(s,3);
//    return 0;
//}
//提莫攻击（easy）
//class Solution {
//public:
//    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
//        int ret = 0;
//        for (int i = 0; i < timeSeries.size() - 1; i++) {
//            int tmp = timeSeries[i + 1] - timeSeries[i];
//            if (tmp >= duration) ret += duration;
//            else ret += tmp;
//        }
//        return ret + duration;
//    }
//};
//替换所有的问号（easy）
//class Solution {
//public:
//    string modifyString(string s) {
//        int n = s.size();
//        for (int i = 1; i < n - 1; i++) {
//            if (s[i] == '?')
//                for (char j = 'a'; j <= 'z'; j++) {
//                    if (s[i - 1] != j && s[i + 1] != j)
//                        s[i] = j;
//                }
//        }
//        if (s[0] == '?')
//            for (char j = 'a'; j <= 'z'; j++) {
//                if (s[1] != j)
//                    s[0] = j;
//            }
//        if (s[n - 1] == '?')
//            for (char j = 'a'; j <= 'z'; j++) {
//                if (s[n - 2] != j)
//                    s[n - 1] = j;
//            }
//        return s;
//    }
//};