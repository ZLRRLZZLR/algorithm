
//摆动序列（medium）
//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n, 1), g(n, 1);
//        int ret = 1;
//        for (int i = 1; i < n; i++)
//            for (int j = 0; j < i; j++) {
//                if (nums[j] < nums[i])
//                    f[i] = g[j] + 1 > f[i] ? g[j] + 1 : f[i];
//                if (nums[j] > nums[i])
//                    g[i] = f[j] + 1 > g[i] ? f[j] + 1 : g[i];
//                ret = max(ret, max(f[i], g[i]));
//            }
//        return ret;
//    }
//};
//最长递增子序列（medium）
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        vector<int> dp(nums.size(), 1);
//        int ret = 1;
//        for (int i = 1; i < nums.size(); i++) {
//            for (int j = 0; j <= i - 1; j++)
//                if (nums[j] < nums[i])
//                    dp[i] = max(dp[j] + 1, dp[i]);
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};

