
//最长递增子序列（medium）
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        vector<int> dp(nums.size(), 1);
//        int ret = 1;
//        for (int i = 1; i < nums.size(); i++) {
//            int max_num = 0;
//            for (int j = 0; j <= i - 1; j++) {
//                if (nums[j] < nums[i])
//                    max_num = max(max_num, dp[j]);
//            }
//            dp[i] = max_num + 1;
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};
