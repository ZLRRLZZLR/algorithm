#include <iostream>
#include <vector>	
#include <algorithm>	
#include <queue>	
#include <stack>	

using namespace std;

//扫雷游戏（medium）
//class Solution {
//    int _m = 0;
//    int _n = 0;
//
//    int dx[8] = { 0 , 0 , 1 , -1 , -1 , -1 , 1 , 1 };
//    int dy[8] = { 1 , -1 , 0 , 0 , -1 , 1 , -1 , 1 };
//
//public:
//    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
//        _m = board.size();
//        _n = board[0].size();
//        int x = click[0], y = click[1];
//        if (board[x][y] == 'M') {
//            board[x][y] = 'X';
//            return board;
//        }
//        dfs(board, x, y);
//        return board;
//    }
//
//    void dfs(vector<vector<char>>& board, int i, int j) {
//
//        int count = 0;
//        for (int k = 0; k < 8; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && board[x][y] == 'M') {
//                count++;
//            }
//            else {
//            }
//        }
//        if (count > 0) {
//            board[i][j] = count + '0';
//            return;
//        }
//        else {
//            board[i][j] = 'B';
//            for (int k = 0; k < 8; k++) {
//                int x = i + dx[k], y = j + dy[k];
//                if (x >= 0 && x < _m && y >= 0 && y < _n && board[x][y] == 'E') {
//                    dfs(board, x, y);
//                }
//            }
//        }
//
//    }
//};
//int main() {
//	vector<vector<char>> board = { {'E','E','E','E','E'},{'E','E','M','E','E'},{'E','E','E','E','E'},{'E','E','E','E','E'} };
//	vector<int> click = { 3,0 };
//	Solution().updateBoard(board, click);
//	return 0;
//}

//太平洋大西洋水流问题（medium）
//class Solution {
//    int _m = 0;
//    int _n = 0;
//public:
//    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
//        _m = heights.size();
//        _n = heights[0].size();
//        vector<vector<bool>> vis1(201, vector<bool>(201));
//        vector<vector<bool>> vis2(201, vector<bool>(201));
//        for (int i = 0; i < _n; i++) dfs(heights, 0, i, vis1);
//        for (int i = 0; i < _m; i++) dfs(heights, i, 0, vis1);
//
//        for (int i = 0; i < _n; i++) dfs(heights, _m - 1, i, vis2);
//        for (int i = 0; i < _m; i++) dfs(heights, i, _n - 1, vis2);
//
//        vector<vector<int>> ret;
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (vis1[i][j] && vis2[i][j])
//                    ret.push_back({ i,j });
//            }
//        }
//        return ret;
//    }
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    void dfs(vector<vector<int>>& heights, int i, int j, vector<vector<bool>>& vis) {
//        vis[i][j] = true;
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && heights[x][y] >= heights[i][j]) {
//                dfs(heights, x, y, vis);
//            }
//        }
//    }
//
//};
//
//int main() {
//
//    vector<vector<int>> heights = { {1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4} };
//    Solution().pacificAtlantic(heights);
//    return 0;
//
//}

//被围绕的区域（medium）
//class Solution {
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//    int sum = 0;
//public:
//    void solve(vector<vector<char>>& board) {
//        _m = board.size();
//        _n = board[0].size();
//
//        for (int j = 0; j < _n; j++) {
//            if (board[0][j] == 'O') {
//                dfs(board, 0, j);
//            }
//        }
//        for (int j = 0; j < _n; j++) {
//            if (board[_m - 1][j] == 'O') {
//                dfs(board, _m - 1, j);
//            }
//        }
//        for (int i = 0; i < _m; i++) {
//            if (board[i][0] == 'O') {
//                dfs(board, i, 0);
//            }
//        }
//        for (int i = 0; i < _m; i++) {
//            if (board[i][_n - 1] == 'O') {
//                dfs(board, i, _n - 1);
//            }
//        }
//
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (board[i][j] == 'O') {
//                    board[i][j] = 'X';
//                }
//                else if (board[i][j] == '.') {
//                    board[i][j] = 'O';
//                }
//            }
//        }
//    }
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    void dfs(vector<vector<char>>& board, int i, int j) {
//        board[i][j] = '.';
//
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && board[x][y] == 'O') {
//                dfs(board, x, y);
//            }
//        }
//    }
//
//};

//int main() {
//    vector<vector<char>> board = { {'O','O','O','O'},{'O','O','O','O'},{'O','O','O','O'},{'O','O','O','O'} };
//	Solution().solve(board);
//	return 0;
//
//}

//class Solution {
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//    int sum = 0;
//public:
//    void solve(vector<vector<char>>& board) {
//        _m = board.size();
//        _n = board[0].size();
//
//        for (int i = 0; i < _m; i += _m - 1) {
//            for (int j = 0; j < _n; j++) {
//                if (board[0][j] == 'O') {
//                    dfs(board, i, j);
//                }
//            }
//        }
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j += _n - 1) {
//                if (board[0][j] == 'O') {
//                    dfs(board, i, j);
//                }
//            }
//        }
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (board[0][j] == 'O') {
//                    board[0][j] = 'X';
//                }
//                if (board[0][j] == '.') {
//                    board[0][j] = 'O';
//                }
//            }
//        }
//    }
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    void dfs(vector<vector<char>>& board, int i, int j) {
//        board[i][j] = '.';
//
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && board[x][y] == 'Q') {
//                dfs(board, x, y);
//            }
//        }
//    }
//
//};



//岛屿的最大面积（medium）
//class Solution {
//    bool vis[301][301];
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//    int sum = 0;
//public:
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        _m = grid.size();
//        _n = grid[0].size();
//
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (grid[i][j] == 1 && !vis[i][j]) {
//                    sum = 1;
//                    vis[i][j] = true;
//                    dfs(grid, i, j);
//                }
//                _ret = max(_ret, sum);
//            }
//        }
//        return _ret;
//    }
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    void dfs(vector<vector<int>>& grid, int i, int j) {
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && grid[x][y] == 1) {
//                vis[x][y] = true;
//                sum++;
//                dfs(grid, x, y);
//            }
//        }
//    }
//};

//岛屿数量（medium）
//class Solution {
//    bool vis[301][301];
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        _m = grid.size();
//        _n = grid[0].size();
//
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (grid[i][j] == '1' && !vis[i][j]) {
//                    vis[i][j] = true;
//                    _ret++;
//                    dfs(grid, i, j);
//                }
//            }
//        }
//
//        return _ret;
//    }
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    void dfs(vector<vector<char>>& grid, int i, int j) {
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && grid[x][y] == '1') {
//                vis[x][y] = true;
//                dfs(grid, x, y);
//            }
//        }
//    }
//};
//图像渲染（medium）
//class Solution {
//    int _tar;
//    int _m = 0;
//    int _n = 0;
//public:
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//        if (image[sr][sc] == color) return image;
//
//        _tar = image[sr][sc];
//        _m = image.size();
//        _n = image[0].size();
//        dfs(image, sr, sc, _tar, color);
//        return image;
//    }
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    void dfs(vector<vector<int>>& image, int i, int j, int& tar, int& color) {
//
//        image[i][j] = color;
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && image[x][y] == _tar) {
//                dfs(image, x, y, _tar, color);
//            }
//        }
//    }
//
//};
//
//int main() {
//
//
//    vector<vector<int>> image = { {0,0,0},{0,0,0} };
//    Solution().floodFill(image, 0, 0, 0);
//    return 0;
//}