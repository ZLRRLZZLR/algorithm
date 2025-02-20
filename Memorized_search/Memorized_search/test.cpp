#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

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