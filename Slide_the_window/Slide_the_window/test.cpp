#include<iostream>
#include<vector>
#include<string>
using namespace std;


//串联所有单词的子串（hard）
//class Solution {
//public:
//    vector<int> findSubstring(string s, vector<string>& words) {
//        vector<int> ret;
//        unordered_map<string, int> hash1;
//
//        for (auto& s : words)
//        {
//            hash1[s]++;
//        }
//
//        int len = words[0].size();
//        for (int i = 0; i < len; i++)
//        {
//            unordered_map<string, int> hash2;
//            for (int left = i, right = i, count = 0; right + len <= s.size(); right += len)
//            {
//                string in = s.substr(right, len);
//                hash2[in]++;
//
//                if (hash1.count(in) && hash2[in] <= hash1[in])
//                {
//                    count++;
//                }
//
//                if (right - left + 1 > len * words.size())
//                {
//                    string out = s.substr(left, len);
//                    if (hash1.count(out) && hash2[out] <= hash1[out])
//                    {
//                        count--;
//                    }
//                    hash2[out]--;
//                    left += len;
//                }
//
//                if (count == words.size())
//                {
//                    ret.push_back(left);
//                }
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        int hp[128] = { 0 };
//
//        for (auto e : p)
//        {
//            hp[e]++;
//        }
//
//        int n = s.size();
//        int hs[128] = { 0 };
//        vector<int> ret;
//        for (int left = 0, right = 0, count = 0; right < n; right++)
//        {
//            if (++hs[s[right]] <= hp[s[right]])
//                count++;
//
//            if (right - left + 1 > p.size())
//            {
//                if (--hs[s[left]] < hp[s[left]])
//                    count--;
//
//                left++;
//            }
//
//            if (count == p.size())
//            {
//                ret.push_back(left);
//            }
//
//        }
//
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        int hp[128] = { 0 };
//        for (auto e : p)
//        {
//            hp[e]++;
//        }
//        int n = s.size();
//        int hs[128] = { 0 };
//        vector<int> ret;
//        for (int left = 0, right = 0; right < n; right++)
//        {
//            int flag = 1;
//            hs[s[right]]++;
//
//            if (right - left + 1 > p.size())
//            {
//                hs[s[left++]]--;
//            }
//
//            for (int i = 0; i < 128; i++)
//            {
//                if (hs[i] != hp[i])
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//
//            if (flag && right - left + 1 == p.size())
//            {
//                ret.push_back(left);
//            }
//
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    string p = "abc";
//    string s = "cbaebabacd" ;
//    Solution().findAnagrams(s,p);
//
//    return 0;
//}


//水果成篮（medium）
//class Solution {
//public:
//    int totalFruit(vector<int>& fruits) {
//        int hash[100001] = { 0 };
//        int kind = 0;
//        int ret = 0;
//        for (int left = 0, right = 0; right < fruits.size(); right++)
//        {
//            if (hash[fruits[right]] == 0)
//            {
//                kind++;
//            }
//            hash[fruits[right]]++;
//            while (kind > 2)
//            {
//                hash[fruits[left]]--;
//                if (hash[fruits[left]] == 0)
//                {
//                    kind--;
//                }
//                left++;
//            }
//
//            ret = max(ret, right - left + 1);
//        }
//
//        return ret;
//    }
//};

//class Solution {
//public:
//    int totalFruit(vector<int>& fruits) {
//        long long hash[900000] = {0};
//        int n = fruits.size();
//        int ret = 0;
//        int flag = 0;
//        for(int left = 0,right = 0;right < n;right++)
//        {
//            hash[fruits[right]]++;
//            for(int i = 0;i < 900000;i++)
//            {
//                if(hash[i] > 0)
//                flag++;
//            }
//            while(flag > 2)
//            {
//                hash[fruits[left++]]--;
//            }
//
//            ret = max(ret,right - left + 1);
//        }
//        return ret;
//    }
//};
//int main() 
//{
//    vector<int> dp = { 1 , 2 , 1 };
//    Solution().totalFruit(dp);
//
//}

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