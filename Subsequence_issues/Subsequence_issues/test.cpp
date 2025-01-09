#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



//最长等差数列（medium）
//class Solution {
//public:
//    int longestArithSeqLength(vector<int>& nums) {
//        int n = nums.size();
//        unordered_map<int, int> hash;
//        hash[nums[0]] = 0;
//
//        vector<vector<int>> dp(n, vector<int>(n, 2));
//        int ret = 2;
//        for (int i = 1; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                int a = 2 * nums[i] - nums[j];
//                if (hash.count(a))
//                    dp[i][j] = dp[hash[a]][i] + 1;
//                ret = max(ret, dp[i][j]);
//            }
//            hash[nums[i]] = i;
//        }
//
//        return ret;
//    }
//};
//最长的斐波那契子序列的长度（medium）
//class Solution {
//public:
//    int lenLongestFibSubseq(vector<int>& arr) {
//        int n = arr.size();
//        vector<vector<int>> dp(n, vector<int>(n, 2));
//        unordered_map<int, int> hash;
//        for (int i = 0; i < n; i++) hash[arr[i]] = i;
//
//        int ret = 2;
//        for (int j = 2; j < n; j++) {
//            for (int i = 1; i < j; i++) {
//                int a = arr[j] - arr[i];
//                if (a < arr[i] && hash.count(a))
//                    dp[i][j] = dp[hash[a]][i] + 1;
//                ret = max(ret, dp[i][j]);
//            }
//        }
//        return ret < 3 ? 0 : ret;
//    }
//};
//最长定差子序列（medium）
/*class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> hash;
        hash[arr[0]] = 1;
        int ret = 1;
        for (int i = 1; i < arr.size(); i++) {
            hash[arr[i]] = hash[arr[i] - difference] + 1;
            ret = max(ret, hash[arr[i]]);
        }
        return ret;
    */}
};
//最长数对链（medium）
//class Solution {
//public:
//    int findLongestChain(vector<vector<int>>& pairs) {
//        sort(pairs.begin(), pairs.end());
//
//        int n = pairs.size();
//        vector<int> dp(n, 1);
//        int ret = 1;
//        for (int i = 1; i < n; i++) {
//            for (int j = 0; j < i; j++) {
//                if (pairs[j][1] < pairs[i][0]) {
//                    dp[i] = max(dp[j] + 1, dp[i]);
//                }
//            }
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};
//int main()
//{
//	vector<vector<int>> pairs = {{1, 2}, {7, 8}, {4, 5}};
//	sort(pairs.begin(), pairs.end());
//
//
//	return 0;
//}
//最长递增子序列的个数（medium）
//class Solution {
//public:
//    int findNumberOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> len(n, 1), count(n, 1);
//        int maxlevel = 1, retcount = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++) {
//                if (nums[j] < nums[i]) {
//                    if (len[j] + 1 > len[i]) {
//                        count[i] = count[j];
//                        len[i] = len[j] + 1;
//                    }
//                    else if (len[j] + 1 == len[i]) count[i] += count[j];
//                }
//            }
//            if (maxlevel < len[i]) {
//                maxlevel = len[i];
//                retcount = count[i];
//            }
//            else if (maxlevel == len[i]) retcount += count[i];
//        }
//
//        return retcount;
//    }
//};
//最长递增子序列的个数（medium）
//class Solution {
//public:
//    int findNumberOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> len(n, 1), count(n, 1);
//        int maxlevel = 1, retcount = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++) {
//                if (nums[j] < nums[i]) {
//                    if (len[j] + 1 > len[i]) {
//                        count[i] = count[j];
//                        len[i] = len[j] + 1;
//                    }
//                    else if (len[j] + 1 == len[i]) count[i] += count[j];
//                }
//            }
//            if (maxlevel < len[i]) {
//                maxlevel = len[i];
//                retcount = count[i];
//            }
//            else if (maxlevel == len[i]) retcount += count[i];
//        }
//
//        return retcount;
//    }
//};
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
