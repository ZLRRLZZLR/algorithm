#include<iostream>
#include<vector>
using namespace std;

//将 x 减到 0 的最小操作数 (medium)
//class Solution {
//public:
//    int minOperations(vector<int>& nums, int x) {
//        int ret = -1;
//        int n = nums.size();
//        int target = 0;
//        for (auto e : nums)
//        {
//            target += e;
//        }
//        target -= x;
//        if (target < 0) return -1;
//        for (int left = 0, right = 0, flag = 0; right < n; right++)
//        {
//            flag += nums[right];
//
//            while (flag > target)
//            {
//                flag -= nums[left++];
//            }
//
//            if (flag == target)
//                ret = max(ret, right - left + 1);
//        }
//
//        return ret == -1 ? -1 : n - ret;
//    }
//};
//class Solution {
//public:
//    int minOperations(vector<int>& nums, int x) {
//        int ret = INT_MAX;
//        int n = nums.size();
//        int target = 0;
//        for (auto e : nums)
//        {
//            target += e;
//        }
//        target -= x;
//        for (int left = 0, right = 0, flag = 0; right < n; right++)
//        {
//            flag += nums[right];
//
//            while (flag > target && left <= right)
//            {
//                flag -= nums[left++];
//            }
//
//            if (flag == target)
//                ret = min(ret, n - right + left - 1);
//        }
//
//        return ret == INT_MAX ? -1 : ret;
//    }
//};
//class Solution {
//public:
//    int minOperations(vector<int>& nums, int x) {
//        int ret = 0;
//        int n = nums.size();
//        int target = 0;
//        for (auto e : nums)
//        {
//            target += e;
//        }
//        target -= x;
//        for (int left = 0, right = 0, flag = 0; right < n; right++)
//        {
//            flag += nums[right];
//
//            while (flag > target)
//            {
//                flag -= nums[left++];
//            }
//
//            if (flag == target)
//                ret = (ret, right - left + 1);
//        }
//
//        return ret == 0 ? -1 : ret;
//    }
//};
//int main()
//{
//    vector<int> v = { 3,2,20,1,1,3 };
//    Solution().minOperations(v,10);
//    return 0;
//}
//解最大连续 1 的个数 III（medium）
//class Solution {
//public:
//    int longestOnes(vector<int>& nums, int k) {
//        int n = nums.size();
//        int flag = 0;
//        int ret = 0;
//        for (int left = 0, right = 0; right < n; right++)
//        {
//            if (nums[right] == 0)
//            {
//                flag++;
//            }
//            while(flag > k)
//            {
//                if (nums[left] == 0)
//                {
//                    flag--;
//                }
//                left++;
//            }
//            ret = max(ret, right - left + 1);
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 1,1,1,0,0,0,1,1,1,1,0 };
//    Solution().longestOnes(nums,2);
//    return 0;
//}

//无重复字符的最长子串（medium）
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int hash[128] = { 0 };
//        int n = s.size();
//        int len = 0;
//        for (int right = 0, left = 0; right < n; right++)
//        {
//            hash[s[right]]++;
//            while (hash[s[right]] > 1)
//            {
//                hash[s[left++]]--;
//            }
//            len = max(len, right - left + 1);
//        }
//
//        return len;
//    }
//};
//长度最小的子数组（medium）
/*class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), sum = 0, len = INT_MAX;
        for (int left = 0, right = 0; right < n; right++)
        {
            sum += nums[right];
            while (sum >= target)
            {
                len = min(len, right - left + 1);
                sum -= nums[left++];
            }
        }
//
////        return len == INT_MAX ? 0 : len;
////    */
//};