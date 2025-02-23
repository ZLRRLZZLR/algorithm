#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<stack>
#include<algorithm>

using namespace std;

//地图中的最高点（medium）
//class Solution {
//    typedef pair<int, int> PII;
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//public:
//    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
//        int m = isWater.size();
//        int n = isWater[0].size();
//        vector<vector<int>> vis(m, vector<int>(n, -1));
//        queue<PII> q;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (isWater[i][j] == 1) {
//                    q.emplace(i, j);
//                    vis[i][j] = 0;
//                }
//            }
//        }
//
//        while (q.size()) {
//            auto [a, b] = q.front();
//            q.pop();
//            for (int k = 0; k < 4; k++) {
//                int x = a + dx[k], y = b + dy[k];
//                if (x >= 0 && x < m && y >= 0 && y < n && vis[x][y] == -1) {
//                    q.emplace(x, y);
//                    vis[x][y] = vis[a][b] + 1;
//                }
//            }
//        }
//        return vis;
//    }
//
//
//};

//飞地的数量（medium）
//class Solution {
//    typedef pair<int, int> PII;
//    bool vis[501][501];
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//public:
//    int numEnclaves(vector<vector<int>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        queue<PII> q;
//        for (int i = 0; i < m; i++) {
//            if (grid[i][0] == 1) {
//                q.emplace(i, 0);
//                vis[i][0] = true;
//            }
//            if (grid[i][n - 1] == 1) {
//                q.emplace(i, n - 1);
//                vis[i][n - 1] = true;
//            }
//        }
//        for (int j = 0; j < n; j++) {
//            if (grid[0][j] == 1) {
//                q.emplace(0, j);
//                vis[0][j] = true;
//            }
//            if (grid[m - 1][j] == 1) {
//                q.emplace(m - 1, j);
//                vis[m - 1][j] = true;
//            }
//        }
//        while (q.size()) {
//            auto [a, b] = q.front();
//            q.pop();
//            for (int k = 0; k < 4; k++) {
//                int x = a + dx[k], y = b + dy[k];
//                if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && grid[x][y] == 1) {
//                    q.emplace(x, y);
//                    vis[x][y] = true;
//                }
//            }
//        }
//        int ret = 0;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (!vis[i][j] && grid[i][j] == 1) ret++;
//            }
//        }
//        return ret;
//    }
//};

//01 矩阵（medium）
//class Solution {
//    typedef pair<int, int> PII;
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//public:
//    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//        int m = mat.size();
//        int n = mat[0].size();
//        vector<vector<int>> vis(m, vector<int>(n, -1));
//        queue<PII> q;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (mat[i][j] == 0) {
//                    q.emplace(i, j);
//                    vis[i][j] = 0;
//                }
//            }
//        }
//
//        while (q.size()) {
//            auto [a, b] = q.front();
//            q.pop();
//            for (int k = 0; k < 4; k++) {
//                int x = a + dx[k], y = b + dy[k];
//                if (x >= 0 && x < m && y >= 0 && y < n && vis[x][y] == -1) {
//                    q.emplace(x, y);
//                    vis[x][y] = vis[a][b] + 1;
//                }
//            }
//        }
//        return vis;
//    }
//};