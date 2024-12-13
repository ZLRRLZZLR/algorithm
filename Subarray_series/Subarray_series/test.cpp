#include<iostream>
#include<vector>

using namespace std;

//乘积最大子数组（medium）
//class Solution {
//public:
//    int maxProduct(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n + 1, 1);
//        auto g = f;
//        int ret = INT_MIN;
//
//        for (int i = 1; i <= n; i++)
//        {
//            f[i] = max(nums[i - 1], max(f[i - 1] * nums[i - 1], g[i - 1] * nums[i - 1]));
//            g[i] = min(nums[i - 1], min(f[i - 1] * nums[i - 1], g[i - 1] * nums[i - 1]));
//
//            ret = max(ret, f[i]);
//        }
//
//        return ret;
//    }
//};
//环形子数组的最大和（medium）
//class Solution {
//public:
//    int maxSubarraySumCircular(vector<int>& nums) {
//
//        int n = nums.size();
//        int sum = 0;
//
//        vector<int> f(n + 1);
//        auto g = f;
//
//        int Max = INT_MIN;
//        int Min = INT_MAX;
//
//        for (int i = 1; i <= n; i++)
//        {
//            f[i] = max(nums[i - 1], f[i - 1] + nums[i - 1]);
//            Max = max(Max, f[i]);
//            g[i] = min(nums[i - 1], g[i - 1] + nums[i - 1]);
//            Min = min(Min, g[i]);
//            sum += nums[i - 1];
//        }
//
//        return sum == Min ? Max : max(Max, sum - Min);
//    }
//};

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