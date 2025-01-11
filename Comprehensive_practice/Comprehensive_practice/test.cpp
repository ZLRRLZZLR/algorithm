

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