#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
using namespace std;


//被围绕的区域（medium）
//class Solution {
//    typedef pair<int, int> PII;
//    bool vis[201][201];
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//public:
//    void solve(vector<vector<char>>& board) {
//        _m = board.size();
//        _n = board[0].size();
//        if (_m == 1 && _n == 1) return;
//        for (int j = 0; j < _n; j++) {
//            if (board[0][j] == 'O' && !vis[0][j]) {
//                bfs(board, 0, j);
//            }
//            if (board[_m - 1][j] == 'O' && !vis[_m - 1][j]) {
//                bfs(board, _m - 1, j);
//            }
//        }
//        for (int i = 0; i < _m; i++) {
//            if (board[i][0] == 'O' && !vis[i][0]) {
//                bfs(board, i, 0);
//            }
//            if (board[i][_n - 1] == 'O' && !vis[i][_n - 1]) {
//                bfs(board, i, _n - 1);
//            }
//        }
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (board[i][j] == 'O' && !vis[i][j]) board[i][j] = 'X';
//                if (board[i][j] == '.') board[i][j] = 'O';
//            }
//        }
//    }
//    void bfs(vector<vector<char>>& board, int i, int j) {
//        int sum = 0;
//        queue<PII> q;
//        q.emplace(i, j);
//        vis[i][j] = true;
//        board[i][j] = '.';
//        while (q.size()) {
//            auto [a, b] = q.front();
//            q.pop();
//            for (int k = 0; k < 4; k++) {
//                int x = a + dx[k], y = b + dy[k];
//                if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && board[x][y] == 'O') {
//                    q.emplace(x, y);
//                    vis[x][y] = true;
//                    board[i][j] = '.';
//                }
//            }
//        }
//    }
//};
//class Solution {
//    typedef pair<int, int> PII;
//    bool vis[201][201];
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//public:
//    void solve(vector<vector<char>>& board) {
//        _m = board.size();
//        _n = board[0].size();
//
//        for (int j = 0; j < _n; j++) {
//            if (board[0][j] == 'O' && !vis[0][j]) {
//                bfs(board, 0, j);
//            }
//            if (board[_m - 1][j] == 'O' && !vis[_m - 1][j]) {
//                bfs(board, _m - 1, j);
//            }
//        }
//        for (int i = 0; i < _m; i++) {
//            if (board[i][0] == 'O' && !vis[i][0]) {
//                bfs(board, i, 0);
//            }
//            if (board[i][_n - 1] == 'O' && !vis[i][_n - 1]) {
//                bfs(board, i, _n - 1);
//            }
//        }
//        for (int i = 1; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (board[i][j] == 'O' && !vis[i][j]) board[i][j] = 'X';
//                if (board[i][j] == '.') board[i][j] = 'O';
//            }
//        }
//    }
//    int bfs(vector<vector<char>>& board, int i, int j) {
//        int sum = 0;
//        queue<PII> q;
//        q.emplace(i, j);
//        vis[i][j] = true;
//        board[i][j] = '.';
//            while (q.size()) {
//                auto [a, b] = q.front();
//                q.pop();
//                for (int k = 0; k < 4; k++) {
//                    int x = a + dx[k], y = b + dy[k];
//                    if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && board[x][y] == 'O') {
//                        q.emplace(x, y);
//                        vis[x][y] = true;
//                        board[i][j] = '.';
//                    }
//                }
//            }
//    }
//};




//岛屿的最大面积（medium）
//class Solution {
//    typedef pair<int, int> PII;
//    bool vis[301][301];
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//public:
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        _m = grid.size();
//        _n = grid[0].size();
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (grid[i][j] == 1 && !vis[i][j]) {
//                    int sum = 0;
//                    queue<PII> q;
//                    q.emplace(i, j);
//                    vis[i][j] = true;
//                    sum++;
//                    while (q.size()) {
//                        auto [a, b] = q.front();
//                        q.pop();
//                        for (int k = 0; k < 4; k++) {
//                            int x = a + dx[k], y = b + dy[k];
//                            if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && grid[x][y] == 1) {
//                                q.emplace(x, y);
//                                vis[x][y] = true;
//                                sum++;
//                            }
//                        }
//                    }
//                    _ret = max(sum, _ret);
//                }
//            }
//        }
//        return _ret;
//    }
//};
//
//int main() {
//	vector<vector<int>> grid = { {1,1,0,0,0},{1,1,0,0,0},{0,0,0,1,1},{0,0,0,1,1} };
//	Solution().maxAreaOfIsland(grid);
//    return 0;
//}

//岛屿数量（medium）
//class Solution {
//    typedef pair<int, int> PII;
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        int m = grid.size(), n = grid[0].size();
//        int ret = 0;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (grid[i][j] == '1') {
//                    ret++;
//                    queue<PII> q;
//                    q.emplace(i, j);
//                    while (q.size()) {
//                        auto [a, b] = q.front();
//                        grid[a][b] = '0';
//                        q.pop();
//                        for (int k = 0; k < 4; k++) {
//                            int x = a + dx[k], y = b + dy[k];
//                            if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == '1') {
//                                q.emplace(x, y);
//                                grid[x][y] = '0';
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        return ret;
//    }
//};

//图像渲染（medium）
//class Solution {
//    typedef pair<int, int> PII;
//public:
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//        int aim = image[sr][sc];
//        if (aim == color) return image;
//        int m = image.size(), n = image[0].size();
//        int dx[4] = { 0,0,1,-1 };
//        int dy[4] = { 1,-1,0,0 };
//        queue<PII> q;
//        q.emplace(sr, sc);
//        while (q.size()) {
//            auto [a, b] = q.front();
//            image[a][b] = color;
//            q.pop();
//
//            for (int k = 0; k < 4; k++) {
//                int x = a + dx[k], y = b + dy[k];
//                if (x >= 0 && x < m && y >= 0 && y < n && image[x][y] == aim) {
//                    q.emplace(x, y);
//                }
//            }
//        }
//        return image;
//    }
//};