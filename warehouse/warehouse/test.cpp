#include <iostream>
#include <string> 
#include <vector>   

using namespace std;    


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
//int main() {
//	Solution sol;
//	string s = "abbaca";
//	sol.removeDuplicates(s);
//	return 0;   
//}