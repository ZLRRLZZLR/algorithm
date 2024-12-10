#include<iostream>
#include<vector>
using namespace std;

//最大子数组和（medium）
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//
//        vector<int> dp(n + 1);
//
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i] = max(nums[i - 1], dp[i - 1] + nums[i - 1]);
//        }
//
//        int ret = INT_MIN;
//
//        for (int i = 1; i <= n; i++)
//        {
//            ret = max(ret, dp[i]);
//        }
//
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n + 1);
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i] = max(nums[i - 1], dp[i - 1] + nums[i - 1]);
//        }
//
//        int ret = INT_MIN;
//
//        for (auto& e : dp)
//        {
//            ret = max(ret, e);
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<int> v = { -1 };
//    Solution().maxSubArray(v);
//    return 0;
//}