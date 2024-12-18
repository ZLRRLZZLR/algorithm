#include<iostream>
#include<vector>

using namespace std;

//乘积为正数的最长子数组（medium）
//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);
//        int ret = 0;
//        for (int i = 2; i < n; i++) {
//            dp[i] = ((nums[i - 1] - nums[i - 2]) == (nums[i] - nums[i - 1]) ? dp[i - 1] + 1 : 0);
//            ret += dp[i];
//        }
//
//        return ret;
//    }
//};
//int main() {
//
//    vector<int> v = {1,2,3,4};
//    Solution().numberOfArithmeticSlices(v);
//    return 0;
//}

//乘积为正数的最长子数组（medium）
//class Solution {
//public:
//    int getMaxLen(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n + 1);
//        auto g = f;
//        int ret = INT_MIN;
//        for (int i = 1; i <= n; i++) {
//            if (nums[i - 1] > 0) {
//                f[i] = f[i - 1] + 1;
//                g[i] = g[i - 1] == 0 ? 0 : g[i - 1] + 1;
//            }
//            else if (nums[i - 1] < 0) {
//                f[i] = g[i - 1] == 0 ? 0 : g[i - 1] + 1;
//                g[i] = f[i - 1] + 1;
//            }
//            ret = max(ret, f[i]);
//        }
//
//        return ret;
//    }
//};
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