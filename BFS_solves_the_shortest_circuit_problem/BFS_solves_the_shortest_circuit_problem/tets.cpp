#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>

using namespace std;


//单词接龙（hard）
//class Solution {
//public:
//    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//        unordered_set<string> hash(wordList.begin(), wordList.end());
//        unordered_set<string> vis;
//
//        int level = 0;
//        queue<string> q;
//        vis.emplace(beginWord);
//        q.emplace(beginWord);
//
//        while (q.size()) {
//            level++;
//            int sz = q.size();
//            for (int i = 0; i < sz; i++) {
//                string s = q.front();
//                q.pop();
//                for (int j = 0; j < s.size(); j++) {
//                    for (int k = 'a'; k <= 'z'; k++) {
//                        string tmp = s;
//                        tmp[j] = k;
//                        if (hash.count(tmp) && !vis.count(tmp)) {
//                            if (tmp == endWord) return level + 1;
//                            q.emplace(tmp);
//                            vis.emplace(tmp);
//                        }
//                    }
//                }
//            }
//        }
//        return 0;
//    }
//};

//最小基因变化（medium）
//class Solution {
//    char d[4] = { 'A','C','G','T' };
//public:
//    int minMutation(string startGene, string endGene, vector<string>& bank) {
//        unordered_set<string> hash(bank.begin(), bank.end());
//        unordered_set<string> vis;
//
//        int level = 0;
//        queue<string> q;
//        vis.emplace(startGene);
//        q.emplace(startGene);
//
//        while (q.size()) {
//            level++;
//            int sz = q.size();
//            for (int i = 0; i < sz; i++) {
//                string s = q.front();
//                q.pop();
//                for (int j = 0; j < s.size(); j++) {
//                    for (int k = 0; k < 4; k++) {
//                        string tmp = s;
//                        tmp[j] = d[k];
//                        if (hash.count(tmp) && !vis.count(tmp)) {
//                            if (tmp == endGene) return level;
//                            q.emplace(tmp);
//                            vis.emplace(tmp);
//                        }
//                    }
//                }
//            }
//        }
//        return -1;
//    }
//};
//
//int main() {
//	Solution s;
//	string startGene = "AAAACCCC";
//	string endGene = "CCCCCCCC";
//	vector<string> bank = { "AAAACCCA","AAACCCCA","AACCCCCA","AACCCCCC","ACCCCCCC","CCCCCCCC","AAACCCCC","AACCCCCC" };
//	cout << s.minMutation(startGene, endGene, bank) << endl;
//	return 0;
//}

//迷宫中离入口最近的出口（medium）
//class Solution {
//    typedef pair<int, int> PII;
//    bool vis[201][201];
//    int _m = 0;
//    int _n = 0;
//    int _ret = 0;
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//public:
//    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
//        _m = maze.size();
//        _n = maze[0].size();
//        return bfs(maze, entrance[0], entrance[1]);
//    }
//
//    int bfs(vector<vector<char>>& maze, int i, int j) {
//        int levelsize = 0;
//        queue<PII> q;
//        q.emplace(i, j);
//        int level = 1;
//        vis[i][j] = true;
//        while (q.size()) {
//            while (level--) {
//                int a = q.front().first;
//                int b = q.front().second;
//                q.pop();
//                if ((a == 0 || b == 0 || a == _m - 1 || b == _n - 1) && (a != i || b != j)) {
//                    return levelsize;
//                }
//                for (int k = 0; k < 4; k++) {
//                    int x = a + dx[k], y = b + dy[k];
//                    if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && maze[x][y] == '.') {
//                        q.emplace(x, y);
//                        vis[x][y] = true;
//                    }
//                }
//            }
//            level = q.size();
//            levelsize++;
//        }
//        return -1;
//    }
//};
//
//int main() {
//	Solution s;
//	vector<vector<char>> maze = { {'+','+','.','+'},{'.','.','.','+'},{'+','+','+','.'} };
//	vector<int> entrance = { 1,2 };
//	cout << s.nearestExit(maze, entrance) << endl;
//	return 0;
//}
