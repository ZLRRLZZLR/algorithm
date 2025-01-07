
//子集（medium）
//class Solution {
//public:
//    vector<int> path;
//    vector<vector<int>> ret;
//    vector<vector<int>> subsets(vector<int>& nums) {
//        dfs(nums, 0);
//        return ret;
//    }
//    void dfs(vector<int>& nums, int pos) {
//        ret.push_back(path);
//        for (int i = pos; i < nums.size(); i++) {
//            path.push_back(nums[i]);
//            dfs(nums, i + 1);
//            path.pop_back();
//        }
//    }
//};
//class Solution {
//public:
//    vector<int> path;
//    vector<vector<int>> ret;
//    vector<vector<int>> subsets(vector<int>& nums) {
//        dfs(nums, 0);
//        return ret;
//    }
//    void dfs(vector<int>& nums, int k) {
//        if (k == nums.size()) {
//            ret.push_back(path);
//            return;
//        }
//        path.push_back(nums[k]);
//        dfs(nums, k + 1);
//        path.pop_back();
//        dfs(nums, k + 1);
//    }
//};
//class Solution {
//public:
//    vector<int> path;
//    vector<vector<int>> ret;
//    vector<vector<int>> subsets(vector<int>& nums) {
//        dfs(nums, 0);
//        return ret;
//    }
//    void dfs(vector<int>& nums, int k) {
//        if (k == nums.size()) {
//            ret.push_back(path);
//            return;
//        }
//        path.push_back(nums[k]);
//        dfs(nums, k + 1);
//        path.pop_back();
//        dfs(nums, k + 1);
//    }
//};

//全排列（medium）
//class Solution {
//    bool check[7];
//    vector<int> path;
//    vector<vector<int>> ret;
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        dfs(nums);
//        return ret;
//    }
//    void dfs(vector<int>& nums) {
//        if (path.size() == nums.size()) {
//            ret.push_back(path);
//            return;
//        }
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (check[i] == false) {
//                path.push_back(nums[i]);
//                check[i] = true;
//                dfs(nums);
//                path.pop_back();
//                check[i] = false;
//            }
//        }
//    }
//};