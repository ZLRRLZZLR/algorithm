#include<iostream>
#include<string>
#include<vector>
using namespace std;


//单词搜索（medium）
//class Solution {
//    bool vis[7][7];
//    int _m = 0;
//    int _n = 0;
//public:
//    bool exist(vector<vector<char>>& board, string word) {
//        _m = board.size();
//        _n = board[0].size();
//        for (int i = 0; i < _m; i++) {
//            for (int j = 0; j < _n; j++) {
//                if (board[i][j] == word[0]) {
//                    vis[i][j] = true;
//                    if (dfs(board, i, j, word, 1)) return true;
//                    vis[i][j] = false;
//                }
//            }
//        }
//        return false;
//    }
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//
//    bool dfs(vector<vector<char>>& board, int i, int j, string word, int pos) {
//        if (pos == word.size()) return true;
//
//        for (int k = 0; k < 4; k++) {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < _m && y >= 0 && y < _n && !vis[x][y] && board[x][y] == word[pos]) {
//                vis[x][y] = true;
//                if (dfs(board, x, y, word, pos + 1)) return true;
//                vis[x][y] = false;
//            }
//        }
//        return false;
//    }
//};

/*int main() {
	vector<vector<char>> board = { {'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'} };
	string word = "ABCCED";
	Solution().exist(board, word);
	return 0;
} */  




//class Solution {
//    bool row[9][10];
//    bool col[9][10];
//    bool grid[3][3][10];
//    int _i = 0;
//    int _j = 0;
//public:
//    void solveSudoku(vector<vector<char>>& board) {
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++) {
//                if (isdigit(board[i][j])) {
//                    int num = board[i][j] - '0';
//                    row[i][num] = col[j][num] = grid[i / 3][j / 3][num] = true;
//                }
//            }
//        }
//        dfs(board);
//    }
//    bool dfs(vector<vector<char>>& board) {
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++) {
//                if (!isdigit(board[i][j])) {
//                    for (int num = 1; num <= 9; num++) {
//                        if (!row[i][num] && !col[j][num] && !grid[i / 3][j / 3][num]) {
//                            board[i][j] = num + '0';
//                            if (dfs(board) == true) return true;
//                            board[i][j] = '.';
//                            row[i][num] = col[j][num] = grid[i / 3][j / 3][num] = false;
//                        }
//                    }
//                    return false;
//                }
//            }
//        }
//        return true;
//    }
//};


//有效的数独（medium）
//class Solution {
//public:
//    bool isValidSudoku(vector<vector<char>>& board) {
//        bool row[9][10];
//        bool col[9][10];
//        bool grid[3][3][10];
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++) {
//                if (isdigit(board[i][j])) {
//                    int num = board[i][j] - '0';
//                    if (!row[i][num] && !col[j][num] && !grid[i / 3][j / 3][num]) {
//                        row[i][num] = col[j][num] = grid[i / 3][j / 3][num] = true;
//                    }
//                    else {
//                        return false;
//                    }
//                }
//            }
//        }
//        return true;
//    }
//};
//N 皇后（hard）
//class Solution {
//public:
//    bool checkCol[10], checkDig1[20], checkDig2[20];
//    vector<vector<string>> ret;
//    vector<string> path;
//    int _n;
//    vector<vector<string>> solveNQueens(int n) {
//        path.resize(n);
//        _n = n;
//        for (int i = 0; i < n; i++) {
//            path[i].append(n, '.');
//        }
//
//        dfs(0);
//        return ret;
//    }
//
//    void dfs(int row) {
//        if (row == _n) {
//            ret.emplace_back(path);
//        }
//        for (int col = 0; col < _n; col++) {
//            if (!checkCol[col] && !checkDig1[row - col + _n] && !checkDig2[row + col]) {
//                path[row][col] = 'Q';
//                checkCol[col] = checkDig1[row - col + _n] = checkDig2[row + col] = true;
//                dfs(row + 1);
//                path[row][col] = '.';
//                checkCol[col] = checkDig1[row - col + _n] = checkDig2[row + col] = false;
//            }
//        }
//    }
//};

/*int main() {
	Solution().solveNQueens(4);
	return 0;
}  */ 


//优美的排列（medium）
//class Solution {
//    bool check[16];
//    int ret = 0;
//    int path = 0;
//public:
//    int countArrangement(int n) {
//        dfs(n, 1);
//        return ret;
//    }
//    void dfs(int n, int pos) {
//        if (pos > n) {
//            if (path == n)  ret++;
//            return;
//        }
//        for (int i = 1; i <= n; i++) {
//            if (check[i] == false && (pos % i == 0 || i % pos == 0))
//            {
//                path++;
//                check[i] = true;
//                dfs(n, pos + 1);
//                path--;
//                check[i] = false;
//            }
//        }
//    }
//};
//
//int main() {
//
//
//    Solution().countArrangement(2);
//    return 0;
//}
//字母大小写全排列（medium）
//class Solution {
//    vector<string> ret;
//public:
//    vector<string> letterCasePermutation(string s) {
//        string path;
//        dfs(s, "", 0);
//        return ret;
//    }
//    void dfs(string s, string path, int pos) {
//        if (path.size() == s.size())
//        {
//            ret.push_back(path);
//            return;
//        }
//
//        if (isdigit(s[pos])) {
//            dfs(s, path + s[pos], pos + 1);
//        }
//        else {
//            char tmp1 = tolower((char)s[pos]);
//            dfs(s, path + tmp1, pos + 1);
//            char tmp2 = toupper((char)s[pos]);
//            dfs(s, path + tmp2, pos + 1);
//        }
//    }
//};
//
//int main() {
//    string s = "C";
//    Solution().letterCasePermutation(s);
//    return 0;
//}


//组合总和（medium）
//class Solution {
//    int aim = 0;
//    vector<int> path;
//    vector<vector<int>> ret;
//public:
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        aim = target;
//        dfs(candidates, 0, 0);
//        return ret;
//    }
//    void dfs(vector<int>& candidates, int pos, int sum) {
//        if (sum == aim) {
//            ret.push_back(path);
//            return;
//        }
//        else if (sum > aim || pos == candidates.size()) {
//            return;
//        }
//
//        for (int i = 0; i * candidates[pos] + sum <= aim; i++) {
//            if (i) path.push_back(candidates[pos]);
//            dfs(candidates, pos + 1, sum + i * candidates[pos]);
//        }
//
//        for (int i = 1; i * candidates[pos] + sum <= aim; i++) {
//            path.pop_back();
//        }
//    }
//};
//
//int main() {
//
//    vector<int> dp = { 2,3,6,7 };
//    Solution().combinationSum(dp,7);
//    return 0;
//}
//class Solution {
//    int aim = 0;
//    vector<vector<int>> ret;
//    vector<int> path;
//public:
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        aim = target;
//        dfs(candidates, 0, 0);
//        return ret;
//    }
//    void dfs(vector<int>& candidates, int tmp, int pos) {
//        if (tmp == aim) {
//            ret.push_back(path);
//            return;
//        }
//        if (pos == candidates.size() || tmp > aim) {
//            return;
//        }
//        for (int i = pos; i < candidates.size(); i++) {
//            path.push_back(candidates[i]);
//            dfs(candidates, tmp + candidates[i], i);
//            path.pop_back();
//        }
//    }
//};
//
//int main() {
//
//    vector<int> dp = { 2,3,6,7};
//    Solution().combinationSum(dp,7);
//
//    return 0;
//}
//目标和（medium）
//class Solution {
//    int ret = 0;
//    int _target = 0;
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        _target = target;
//        int pos = 0;
//        dfs(nums, pos, 0);
//        return ret;
//    }
//    void dfs(vector<int>& nums, int pos, int path) {
//        if (pos == nums.size()) {
//            if (_target == path) {
//                ret++;
//            }
//            return;
//        }
//
//
//        dfs(nums, pos + 1, path + nums[pos]);
//
//        dfs(nums, pos + 1, path - nums[pos]);
//
//    }
//};

//class Solution {
//    int ret = 0;
//    int _target = 0;
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        _target = target;
//        int path = 0;
//        int pos = 0;
//        dfs(nums, pos, path);
//        return ret;
//    }
//    void dfs(vector<int>& nums, int pos, int path) {
//        if (pos == nums.size()) {
//            if (_target == path) {
//                ret++;
//            }
//            return;
//        }
//        path += nums[pos];
//        dfs(nums, pos + 1, path);
//        path -= nums[pos];
//
//        path -= nums[pos];
//        dfs(nums, pos + 1, path);
//        path += nums[pos];
//    }
//};
//
//int main() {
//    vector<int> s = { 1, 1, 1, 1, 1 };
//    Solution().findTargetSumWays(s,3);
//    return 0;
//}

//组合（medium）
//class Solution {
//    vector<int> path;
//    vector<vector<int>> ret;
//public:
//    vector<vector<int>> combine(int n, int k) {
//        dfs(n, k, 1);
//        return ret;
//    }
//    void dfs(int n, int k, int pos) {
//        if (path.size() == k) {
//            ret.push_back(path);
//            return;
//        }
//        for (int i = pos; i <= n; i++) {
//            path.push_back(i);
//            dfs(n, k, i + 1);
//            path.pop_back();
//        }
//    }
//};
//括号生成（medium）
//class Solution {
//    string path;
//    vector<string> ret;
//    int left = 0;
//    int right = 0;
//public:
//    vector<string> generateParenthesis(int n) {
//        dfs(n);
//        return ret;
//    }
//    void dfs(int n) {
//        if (right == n) {
//            ret.push_back(path);
//            return;
//        }
//        if (left < n) {
//            path.push_back('(');
//            left++;
//            dfs(n);
//            path.pop_back();
//            left--;
//        }
//        if (right < left) {
//            path.push_back(')');
//            right++;
//            dfs(n);
//            path.pop_back();
//            right--;
//        }
//    }
//};
//电话号码的字母组合（medium）
//class Solution {
//    string path;
//    vector<string> ret;
//    string s[10] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
//public:
//    vector<string> letterCombinations(string digits) {
//        if (digits.size() == 0) return ret;
//        dfs(digits, 0);
//        return ret;
//    }
//    void dfs(string digits, int pos) {
//        if (pos == digits.size()) {
//            ret.push_back(path);
//            return;
//        }
//        for (auto i : s[digits[pos] - '0'])
//        {
//            path.push_back(i);
//            dfs(digits, pos + 1);
//            path.pop_back();
//        }
//
//    }
//};
//全排列 Ⅱ（medium）
//class Solution {
//public:
//	bool check[9];
//	vector<int> path;
//	vector<vector<int>> ret;
//	vector<vector<int>> permuteUnique(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		dfs(nums);
//		return ret;
//	}
//	void dfs(vector<int>& nums) {
//		if (path.size() == nums.size()) {
//			ret.push_back(path);
//		}
//		for (int i = 0; i < nums.size(); i++) {
//			if (!(check[i] == true || (i != 0 && nums[i] == nums[i - 1] && check[i - 1] == false))) {
//				path.push_back(nums[i]);
//				check[i] = true;
//				dfs(nums);
//				path.pop_back();
//				check[i] = false;
//			}
//		}
//	}
//};
//class Solution
//{
//	vector<int> path;
//	vector<vector<int>> ret;
//	bool check[9];
//public:
//	vector<vector<int>> permuteUnique(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		dfs(nums, 0);
//		return ret;
//	}
//	void dfs(vector<int>& nums, int pos)
//	{
//		if (pos == nums.size())
//		{
//			ret.push_back(path);
//			return;
//		}
//		for (int i = 0; i < nums.size(); i++)
//		{
//			// 剪枝
//			if (check[i] == false && (i == 0 || nums[i] != nums[i - 1] ||
//				check[i - 1] != false))
//			{
//				path.push_back(nums[i]);
//				check[i] = true;
//				dfs(nums, pos + 1);
//				path.pop_back(); // 恢复现场
//				check[i] = false;
//			}
//		}
//	}
//};
//找出所有子集的异或总和再求和（easy）
//class Solution {
//    int sum;
//    int path;
//public:
//    int subsetXORSum(vector<int>& nums) {
//        dfs(nums, 0);
//        return sum;
//    }
//    void dfs(vector<int>& nums, int pos) {
//        sum += path;
//        for (int i = pos; i < nums.size(); i++) {
//            path ^= nums[i];
//            dfs(nums, i + 1);
//            path ^= nums[i];
//        }
//    }
//};