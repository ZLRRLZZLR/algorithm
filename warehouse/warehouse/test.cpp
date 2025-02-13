#include <iostream>
#include <string> 
#include <vector>   
#include<stack>

using namespace std;    



//字符串解码（medium）
/*class Solution {
public:
    string decodeString(string s) {
        stack<int> stint;
        stack<string> sts;
        sts.push(" ");
        for (int i = 0; i < s.size();) {
            if (isdigit(s[i])) {
                int tmp = 0;
                while (isdigit(s[i])) {
                    tmp = tmp * 10 + s[i++] - '0';
                }
                stint.push(tmp);
            }
            else if (s[i] == '[') {
                i++;
                string tmp;
                while (s[i] >= 'a' && s[i] <= 'z') {
                    tmp += s[i++];
                }
                sts.push(tmp);
            }
            else if (s[i] == ']') {
                i++;
                string tmp;
                int top = stint.top();
                stint.pop();
                while (top--) {
                    tmp += sts.top();
                }
                sts.pop();
                sts.top() += tmp;
            }
            else {
                string tmp;
                while (s[i] >= 'a' && s[i] <= 'z') {
                    tmp += s[i++];
                }
                sts.top() += tmp;
            }
        }
        return sts.top().substr(1, sts.top().size() - 1);
    }
};


int main() {
	string s = "100[leetcode]";
    Solution().decodeString(s);
	return 0;
}*/   


//基本计算器 II（medium）
//class Solution {
//public:
//    int calculate(string S) {
//        string s;
//        for (auto ch : S) {
//            if (ch != ' ')
//                s += ch;
//        }
//        stack<int>st;
//        double tmp = 0;
//        char c = '+';
//        for (int i = 0; i < s.size();) {
//            if (isdigit(s[i])) {
//                while (isdigit(s[i]))
//                    tmp = tmp * 10 + s[i++] - '0';
//                if (c == '+')st.push(tmp);
//                else if (c == '-') st.push(-tmp);
//                else if (c == '*') {
//                    int top = st.top();
//                    st.pop();
//                    tmp = top * tmp;
//                    st.push(tmp);
//                }
//                else {
//                    int top = st.top();
//                    st.pop();
//                    tmp = top / tmp;
//                    st.push(tmp);
//                }
//            }
//            else {
//                c = s[i++];
//                tmp = 0;
//            }
//        }
//        tmp = 0;
//        while (!st.empty()) {
//            tmp += st.top();
//            st.pop();
//        }
//
//        return tmp;
//    }
//};
//int main() {
//	string s = "3/2";
//	Solution().calculate(s);
//	return 0;
//}   
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
//int main() {
//	Solution sol;
//	string s = "abbaca";
//	sol.removeDuplicates(s);
//	return 0;   
//}