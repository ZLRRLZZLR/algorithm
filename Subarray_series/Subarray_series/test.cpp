#include<iostream>
#include<vector>

using namespace std;


//环绕字符串中唯一的子字符串（medium）
//class Solution {
//public:
//    int findSubstringInWraproundString(string s) {
//        int n = s.size();
//        vector<int> dp(n, 1);
//        vector<int> arr(26);
//        for (int i = 1; i < n; i++) {
//            if ((s[i - 1] + 1 == s[i]) || (s[i - 1] == 'z' && s[i] == 'a'))
//                dp[i] = dp[i - 1] + 1;
//        }
//
//        int ret = 0;
//        for (int i = 0; i < n; i++) arr[s[i] - 'a'] = max(arr[s[i] - 'a'], dp[i]);
//        for (auto e : arr) ret += e;
//
//        return ret;
//    }
//};
//class Solution {
//public:
//    int findSubstringInWraproundString(string s) {
//        int n = s.size();
//        vector<int> dp(n, 1);
//        vector<int> arr(26);
//        for (int i = 1; i < n; i++) {
//            if ((s[i - 1] + 1 == s[i]) || (s[i - 1] == 'z' && s[i] == 'a'))
//                dp[i] = dp[i - 1] + 1;
//        }
//
//        int ret = 0;
//        for (int i = 0; i < n; i++) arr[s[i] - 'a'] = max(arr[s[i] - 'a'], dp[i]);
//        for (auto e : arr) ret += e;
//
//        return ret;
//    }
//};
//
//int main() {
//
//    string s = "zab";
//    Solution().findSubstringInWraproundString(s);
//    return 0;
//}
//单词拆分（medium）
//class Solution {
//public:
//    bool wordBreak(string s, vector<string>& wordDict) {
//        int n = s.size();
//        unordered_set<string> hash;
//        for (auto e : wordDict) hash.insert(e);
//        vector<bool> dp(n + 1);
//        s = ' ' + s;
//        dp[0] = true;
//        for (int i = 0; i <= n + 1; i++) {
//            for (int j = i; j >= 1; j--) {
//                if (dp[j - 1] && hash.contains(s.substr(j, i - j + 1))) {
//                    dp[i] = true;
//                    break;
//                }
//            }
//        }
//        return dp[n];
//    }
//};
//最长湍流子数组（medium）
//class Solution {
//public:
//    int maxTurbulenceSize(vector<int>& arr) {
//        int n = arr.size();
//        vector<int> f(n, 1), g(n, 1);
//        int ret = INT_MIN;
//
//        if (n == 1) return 1;
//        for (int i = 1; i < n; i++) {
//            if (arr[i - 1] < arr[i]) f[i] = g[i - 1] + 1;
//            else if (arr[i - 1] > arr[i]) g[i] = f[i - 1] + 1;
//
//            ret = max(ret, max(f[i], g[i]));
//        }
//
//        return ret;
//    }
//};
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