#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
using namespace std;

//µ∫”Ï ˝¡ø£®medium£©
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

//ÕºœÒ‰÷»æ£®medium£©
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