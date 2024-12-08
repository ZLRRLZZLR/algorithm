#include<iostream>
#include<vector>

using namespace std;

//������Ʊ�����ʱ��IV��hard��
//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//        const int num = -0x3f3f3f3f;
//        int n = prices.size();
//        k = min(k, n / 2);
//
//        vector<vector<int>> f(n, vector<int>(k + 1, num));
//        auto g = f;
//
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j <= k; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                g[i][j] = g[i - 1][j];
//                if (j - 1 >= 0)
//                {
//                    g[i][j] = max(f[i - 1][j - 1] + prices[i], g[i - 1][j]);
//                }
//            }
//        }
//        int ret = num;
//        for (int i = 0; i < k + 1; i++)
//        {
//            ret = max(ret, g[n - 1][i]);
//        }
//        return ret;
//    }
//};
//������Ʊ�����ʱ��III��hard��
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//
//        const int num = -0x3f3f3f3f;
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(3, num));
//        auto g = f;
//
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                g[i][j] = g[i - 1][j];
//                if (j >= 1)
//                {
//                    g[i][j] = max(f[i - 1][j - 1] + prices[i], g[i - 1][j]);
//                }
//            }
//        }
//        int ret = num;
//        for (int i = 0; i < 3; i++)
//        {
//            ret = max(ret, g[n - 1][i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//
//        const int num = -0x3f3f3f3f;
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(3, num));
//        auto g = f;
//
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//
//                if (j - 1 >= 0)
//                {
//                    g[i][j] = max(f[i - 1][j - 1] + prices[i], g[i - 1][j]);
//                }
//                else
//                {
//                    g[i][j] = g[i - 1][j];
//                }
//            }
//        }
//
//        return max(g[n - 1][1], g[n - 1][2]);
//    }
//};
//
//int main()
//{
//    vector<int> v = { 3, 3, 5, 0, 0, 3, 1, 4 };
//    Solution().maxProfit(v);
//    return 0;
//}

//������Ʊ�����ʱ�ں������ѣ�medium��
//class Solution {
//public:
//    int maxProfit(vector<int>& prices, int fee) {
//        int n = prices.size();
//        vector<int> f(n);
//        auto g = f;
//        f[0] = -prices[0], g[0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = max(f[i - 1], g[i - 1] - prices[i]);
//            g[i] = max(g[i - 1], f[i - 1] + prices[i] - fee);
//        }
//
//        return g[n - 1];
//    }
//};
//������Ʊ�����ʱ�����䶳�ڣ�medium��
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> dp(n, vector<int>(3));
//
//        dp[0][0] = -prices[0], dp[0][1] = 0, dp[0][2] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]);
//            dp[i][2] = dp[i - 1][0] + prices[i];
//        }
//
//        return max(dp[n - 1][1], dp[n - 1][2]);
//    }
//};
//��ˢ���ӣ�medium��
//class Solution {
//public:
//    int minCost(vector<vector<int>>& costs) {
//        int n = costs.size();
//        vector<vector<int>> dp(n + 1, vector<int>(3));
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + costs[i - 1][0];
//            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + costs[i - 1][1];
//            dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + costs[i - 1][2];
//        }
//
//        return (min(dp[n][1], min(dp[n][0], dp[n][2])));
//    }
//};
//ɾ������õ�����medium��
//class Solution {
//public:
//    int deleteAndEarn(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int n = nums[nums.size() - 1];
//        int arr[20000] = { 0 };
//        for (auto e : nums)
//        {
//            arr[e] += e;
//        }
//
//        vector<int> f(n + 1);
//        auto g = f;
//        f[0] = arr[0];
//        g[0] = 0;
//
//        for (int i = 1; i <= n; i++)
//        {
//            f[i] = g[i - 1] + arr[i];
//            g[i] = max(f[i - 1], g[i - 1]);
//        }
//
//        return max(f[n], g[n]);
//
//    }
//};
//��ҽ���II ��medium��
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//
//        int n = nums.size();
//
//        return max(nums[0] + robel(nums, 2, n - 2), robel(nums, 1, n - 1));
//    }
//    int robel(vector<int>& nums, int left, int right)
//    {
//        if (left > right) return 0;
//        int n = nums.size();
//        vector<int> f(n);
//        auto g = f;
//
//        f[left] = nums[left];
//
//        for (int i = left + 1; i <= right; i++)
//        {
//            f[i] = g[i - 1] + nums[i];
//            g[i] = max(f[i - 1], g[i - 1]);
//        }
//
//        return max(f[right], g[right]);
//    }
//};

//��Ħʦ��easy��
//class Solution {
//public:
//    int massage(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 0)
//            return 0;
//        vector<int> f(n);
//        auto g = f;
//
//        f[0] = nums[0];
//        g[0] = 0;
//
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = g[i - 1] + nums[i];
//            g[i] = max(f[i - 1], g[i - 1]);
//        }
//
//        return max(f[n - 1], g[n - 1]);
//    }
//};