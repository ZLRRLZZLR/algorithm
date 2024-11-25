#include<iostream>
#include<vector>

using namespace std;

//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int left = 0;
//        int right = 0;
//        int sum = nums[left];
//        int len = INT_MAX;
//        while (right < nums.size())
//        {
//            if (sum < target && right < nums.size())
//            {
//                right++;
//                if (right >= nums.size())
//                    break;
//                sum += nums[right];
//            }
//
//            if (sum >= target)
//                len = min(len, right - left + 1);
//
//            if (left <= right && sum >= target)
//            {
//                sum -= nums[left];
//                left++;
//            }
//
//
//        }
//
//        if (sum < target)
//            return 0;
//
//        return len;
//
//    }
//};
//
//int main()
//{
//    vector<int> v = { 1, 2, 3, 4, 5 };
//    Solution().minSubArrayLen(11,v);
//	return 0;
//}