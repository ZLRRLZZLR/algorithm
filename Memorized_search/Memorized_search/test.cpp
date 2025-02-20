#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;


//猜数字大小II（medium）
//class Solution {
//    int menu[201][201];
//public:
//    int getMoneyAmount(int n) {
//        return dfs(1, n);
//    }
//
//    int dfs(int left, int right) {
//        if (left >= right) return 0;
//
//        if (menu[left][right] != 0) return menu[left][right];
//
//        int num = INT_MAX;
//        for (int i = left; i <= right; i++) {
//            num = min(max(dfs(left, i - 1), dfs(i + 1, right)) + i, num);
//        }
//
//        menu[left][right] = num;
//        return num;
//    }
//};
//
//int main() {
//	Solution s;
//	cout << s.getMoneyAmount(10) << endl;
//	return 0;
//}

//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 1);
//        int ret = 1;
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i + 1; j < n; j++) {
//                if (nums[i] < nums[j])
//                    dp[i] = max(dp[i], dp[j] + 1);
//            }
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};
//最长递增子序列（medium）
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int num = 0;
//        vector<int> menu(nums.size());
//        for (int i = 0; i < nums.size(); i++) {
//            num = max(dfs(nums, i, menu), num);
//        }
//        return num;
//    }
//
//    int dfs(vector<int>& nums, int pos, vector<int>& menu) {
//        if (menu[pos] != 0) return menu[pos];
//        int num = 1;
//        for (int i = pos + 1; i < nums.size(); i++) {
//            if (nums[pos] < nums[i]) {
//                num = max(dfs(nums, i, menu) + 1, num);
//            }
//        }
//        menu[pos] = num;
//        return num;
//    }
//};
//不同路径（medium）
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> menu(m + 1, vector<int>(n + 1));
//        menu[1][1] = 1;
//        for (int i = 1; i <= m; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (i == 1 && j == 1) continue;
//                menu[i][j] = menu[i - 1][j] + menu[i][j - 1];
//            }
//        }
//
//        return menu[m][n];
//    }
//};
//
//int main() {
//	Solution s;
//	cout << s.uniquePaths(3, 7) << endl;
//	return 0;
//}
//class Solution {
//    int menu[101][101];
//public:
//    int uniquePaths(int m, int n) {
//        memset(menu, -1, sizeof(menu));
//        dfs(m, n);
//        return menu[m][n];
//    }
//
//    int dfs(int m, int n) {
//        if (menu[m][n] != -1) return menu[m][n];
//
//        if (m == 0 || n == 0) {
//            return 0;
//        }
//        if (m == 1 && n == 1) {
//            menu[m][n] = 1;
//            return menu[m][n];
//        }
//
//        menu[m][n] = dfs(m - 1, n) + dfs(m, n - 1);
//
//        return menu[m][n];
//    }
//};
//
//
//int main() {
//	Solution s;
//	cout << s.uniquePaths(3, 7) << endl;
//	return 0;
//}
//斐波那契数
//class Solution {
//    int menu[31];
//public:
//    int fib(int n) {
//        memset(menu, -1, sizeof(menu));
//        dfs(n);
//        return menu[n];
//    }
//
//    int dfs(int n) {
//        if (menu[n] != -1) {
//            return menu[n];
//        }
//        if (n == 1 || n == 0) {
//            menu[n] = n;
//            return menu[n];
//        }
//
//        menu[n] = dfs(n - 1) + dfs(n - 2);
//        return menu[n];
//    }
//};