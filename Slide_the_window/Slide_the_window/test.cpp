#include<iostream>
#include<vector>
using namespace std;


//��������� 1 �ĸ��� III��medium��
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

//���ظ��ַ�����Ӵ���medium��
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
//������С�������飨medium��
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