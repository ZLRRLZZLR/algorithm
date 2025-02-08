#include <iostream>
#include <string> 
#include <vector>   

using namespace std;    


//比较含退格的字符串（easy）
//class Solution {
//public:
//    bool backspaceCompare(string s, string t) {
//        string ret1;
//        string ret2;
//        for (auto ch : s) {
//            if (!ret1.empty() && ch == '#') ret1.pop_back();
//            else if (ch != '#') ret1 += ch;
//        }
//        for (auto ch : t) {
//            if (!ret2.empty() && ch == '#') ret2.pop_back();
//            else if (ch != '#') ret2 += ch;
//        }
//        return ret1 == ret2;
//    }
//};
//class Solution {
//public:
//    string removeDuplicates(string s) {
//        string ret;
//        for (auto ch : s) {
//            if (!ret.empty() && ret.back() == ch) ret.pop_back();
//            else ret += ch;
//        }
//        return ret;
//    }
//};
//删除字符中的所有相邻重复项（easy）
//class Solution {
//public:
//    string removeDuplicates(string s) {
//        string ret;
//        ret.push_back(s[0]);
//        for (int i = 1; i < s.size(); i++) {
//            if (ret.empty()) ret += s[i];
//            else if (ret.back() == s[i]) ret.pop_back();
//            else ret += s[i];
//        }
//        return ret;
//    }
//};
//
int main() {
	Solution sol;
	string s = "abbaca";
	sol.removeDuplicates(s);
	return 0;   
}