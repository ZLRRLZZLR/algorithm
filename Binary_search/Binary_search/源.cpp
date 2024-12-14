#include<iostream>
#include<vector>
using namespace std;


//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int n = nums.size();
//        vector<int> ret(2, -1);
//
//        if (n == 0) return ret;
//
//        int left = 0, right = n - 1;
//        while (left < right)
//        {
//            int mid = left + ((right - left) >> 1);
//            if (nums[mid] < target)
//            {
//                left = mid + 1;
//            }
//            else
//            {
//                right = mid;
//            }
//        }
//        if (nums[left] == target) ret[0] = left;
//        else { ret[0] = -1; ret[1] = -1; return ret; }
//
//        for (right = n - 1; left < right;)
//        {
//            int mid = left + ((right - left + 1) >> 1);
//            if (nums[mid] <= target)
//            {
//                left = mid;
//            }
//            else
//            {
//                right = mid - 1;
//            }
//        }
//        if (nums[left] == target) ret[1] = left;
//
//        return ret;
//
//    }
//};
//
//int main()
//{
//    vector<int> v = {1};
//    Solution().searchRange(v,1);
//    return 0;
//}
//¶þ·Ö²éÕÒ£¨easy£©
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        for (int left = 0, right = nums.size() - 1; left <= right;)
//        {
//            int mid = (left + right) >> 1;
//
//            if (nums[mid] < target)
//                left = mid + 1;
//
//            else if (nums[mid] > target)
//                right = mid - 1;
//
//            else
//                return mid;
//        }
//
//        return -1;
//    }
//};