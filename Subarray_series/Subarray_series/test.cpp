#include<iostream>
#include<vector>

using namespace std;

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