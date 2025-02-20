#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
using namespace std;

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