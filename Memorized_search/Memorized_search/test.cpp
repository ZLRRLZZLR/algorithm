#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

//矩阵中的最长递增路径（hard）
//class Solution {
//    int _m = 0;
//    int _n = 0;
//    int menu[201][201];
//public:
//    int longestIncreasingPath(vector<vector<int>>& matrix) {
//        _m = matrix.size();
//        _n = matrix[0].size();
//        memset(menu, 0, sizeof(menu));
//        int ret = 0;
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                ret = max(dfs(matrix, i, j), ret);
//            }
//        }
//
//        return ret;
//    }
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    int dfs(vector<vector<int>>& matrix, int i, int j) {
//        if (menu[i][j] != 0) return menu[i][j];
//        int num = 1;
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && matrix[x][y] > matrix[i][j]) {
//                num = max(dfs(matrix, x, y) + 1, num);
//            }
//        }
//        menu[i][j] = num;
//        return num;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<vector<int>> matrix = { {9,9,4},{6,6,8},{2,1,1} };
//    cout << s.longestIncreasingPath(matrix) << endl;
//    return 0;
//}
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