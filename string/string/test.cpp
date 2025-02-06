#include<iostream>
#include<string>
#include<vector>

using namespace std;


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

