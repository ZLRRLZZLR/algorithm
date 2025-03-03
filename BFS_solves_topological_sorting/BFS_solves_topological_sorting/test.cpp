#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;


//目标和（medium）空间优化版本
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int sum = 0;
//        for (auto i : nums) sum += i;
//        int aim = (sum + target) / 2;
//        if (aim < 0 || (sum + target) % 2) return 0;
//        int n = nums.size();
//        vector<int> dp(aim + 1);
//        dp[0] = 1;
//        for (int i = 1; i <= n; i++)
//            for (int j = aim; j >= nums[i - 1]; j--)
//                dp[j] = dp[j] + dp[j - nums[i - 1]];
//
//        return dp[aim];
//    }
//};

//目标和（medium）
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int sum = 0;
//        for (auto i : nums) sum += i;
//        int aim = (sum + target) / 2;
//        if (aim < 0 || (sum + target) % 2) return 0;
//        int n = nums.size();
//        vector<vector<int>> dp(n + 1, vector<int>(aim + 1));
//        dp[0][0] = 1;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 0; j <= aim; j++) {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= nums[i - 1]) dp[i][j] += dp[i - 1][j - nums[i - 1]];
//            }
//        }
//
//        return dp[n][aim];
//    }
//};

//火星词典（hard）
//class Solution {
//    unordered_map<char, unordered_set<char>> hash;
//    unordered_map<char, int> in;
//    bool check;
//public:
//    string alienOrder(vector<string>& words) {
//        for (auto& s : words) {
//            for (auto ch : s)
//                in[ch] = 0;
//        }
//
//        int n = words.size();
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                com(words[i], words[j]);
//                if (check == true) return "";
//            }
//        }
//
//        queue<char> q;
//        for (auto& [a, b] : in) {
//            if (b == 0) q.emplace(a);
//        }
//
//        string ret;
//        while (q.size()) {
//            int c = q.front();
//            ret += c;
//            q.pop();
//            for (auto ch : hash[c]) {
//                if (--in[ch] == 0) q.emplace(ch);
//            }
//        }
//
//        for (auto& [a, b] : in)
//            if (b != 0)
//                return "";
//
//        return ret;
//    }
//
//    void com(const string& s1, const string& s2) {
//        int n = min(s1.size(), s2.size());
//        int i = 0;
//        for (; i < n; i++) {
//            if (s1[i] != s2[i]) {
//                char a = s1[i], b = s2[i];
//                if (!hash.count(a) || !hash[a].count(b)) {
//                    hash[a].emplace(b);
//                    in[b]++;
//                }
//				break;
//            }
//        }
//        if (i == s2.size() && n < s1.size()) check = true;
//    }
//};

//int main() {
//	Solution s;
//	vector<string> words = { "wrt", "wrf", "er", "ett", "rftt" };
//	cout << s.alienOrder(words) << endl;
//	return 0;
//}
//课程表II（medium）
//class Solution {
//public:
//    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//        unordered_map<int, vector<int>> edges;
//        vector<int> in(numCourses);
//        vector<int> ret;
//        for (auto& i : prerequisites) {
//            int a = i[0], b = i[1];
//            edges[b].push_back(a);
//            in[a]++;
//        }
//
//        queue<int> q;
//        for (int i = 0; i < numCourses; i++) {
//            if (in[i] == 0) q.emplace(i);
//        }
//
//        while (q.size()) {
//            auto  front = q.front();
//            ret.emplace_back(front);
//            q.pop();
//
//            for (auto j : edges[front]) {
//                in[j]--;
//                if (in[j] == 0) q.emplace(j);
//            }
//        }
//
//        for (auto i : in)
//            if (i)
//                return vector<int>();
//
//        return ret;
//    }
//};

//课程表（medium）
//class Solution {
//public:
//    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//        unordered_map<int, vector<int>> edges;
//        vector<int> in(numCourses);
//
//        for (auto& i : prerequisites) {
//            int a = i[0], b = i[1];
//            edges[b].push_back(a);
//            in[a]++;
//        }
//
//        queue<int> q;
//        for (int i = 0; i < numCourses; i++) {
//            if (in[i] == 0) q.emplace(i);
//        }
//
//        while (q.size()) {
//            auto  front = q.front();
//            q.pop();
//
//            for (auto j : edges[front]) {
//                in[j]--;
//                if (in[j] == 0) q.emplace(j);
//            }
//        }
//
//        for (auto i : in)
//            if (i)
//                return false;
//
//        return true;
//    }
//};