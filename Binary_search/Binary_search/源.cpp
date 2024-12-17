#include<iostream>
#include<vector>
using namespace std;


//0～n-1 中缺失的数字（easy）
//class Solution {
//public:
//    int takeAttendance(vector<int>& records) {
//        int ret = 0;
//        for (int i = 0; i <= records.size(); i++) {
//            ret += i;
//        }
//        for (int i = 0; i < records.size(); i++) {
//            ret -= records[i];
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int takeAttendance(vector<int>& records) {
//        int ret = 0;
//        for (auto e : records) {
//            if (ret != e) return ret;
//            ret++;
//        }
//        return records.size();
//    }
//};
//class Solution {
//public:
//    int takeAttendance(vector<int>& records) {
//        int n = records.size();
//        vector<int> hash(n + 1);
//        for (auto e : records) hash[e]++;
//        for (int i = 0; i <= n; i++) if (hash[i] == 0) return i;
//        return -1;
//    }
//};
//class Solution {
//public:
//    int takeAttendance(vector<int>& records) {
//        int num = 0;
//        for (int i = 0; i <= records.size(); i++) {
//            num ^= i;
//        }
//
//        for (auto e : records) {
//            num ^= e;
//        }
//
//        return num;
//    }
//};
//class Solution {
//public:
//    int takeAttendance(vector<int>& records) {
//
//        int n = records.size();
//        int left = 0, right = n - 1;
//        while (left < right) {
//            int mid = left + ((right - left) >> 1);
//            if (records[mid] == mid) left = mid + 1;
//            else right = mid;
//        }
//
//        if (records[left] == left) return left + 1;
//        else return left;
//    }
//};
//搜索旋转排序数组中的最小值（medium）
//class Solution {
//public:
//    int findMin(vector<int>& nums) {
//        int n = nums.size();
//        int left = 0, right = n - 1;
//        while (left < right) {
//            int mid = left + ((right - left) >> 1);
//            if (nums[mid] >= nums[0]) left = mid + 1;
//            else right = mid;
//        }
//        return nums[left] > nums[0] ? nums[0] : nums[left];
//    }
//};
////class Solution {
////public:
////    int findMin(vector<int>& nums) {
////        int n = nums.size();
////        int left = 0, right = n - 1;
////        while (left < right) {
////            int mid = left + ((right - left) >> 1);
////            if (nums[mid] > nums[n - 1]) left = mid + 1;
////            else right = mid;
////        }
////        return nums[left];
////    }
////};
//852. 山脉数组的峰顶索引
//class Solution {
//public:
//    int peakIndexInMountainArray(vector<int>& arr) {
//        int left = 0, right = arr.size() - 1;
//        if (arr.size() == 1) return right;
//
//        while (left < right) {
//            int mid = left + ((right - left + 1) >> 1);
//            if (arr[mid] > arr[mid - 1]) left = mid;
//            else right = mid - 1;
//        }
//
//        return left;
//    }
//};
//寻找峰值（medium）
//class Solution {
//public:
//    int findPeakElement(vector<int>& nums) {
//        int left = 0, right = nums.size() - 1;
//        if (nums.size() == 1) return right;
//
//        while (left < right) {
//            int mid = left + ((right - left + 1) >> 1);
//            if (nums[mid] > nums[mid - 1]) left = mid;
//            else right = mid - 1;
//        }
//
//        return left;
//    }
//};
//搜索插入位置（easy）
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int n = nums.size();
//        if (n == 1) return nums[0] < target ? n : 0;
//
//        int left = 0, right = n - 1;
//        while (left < right) {
//            int mid = left + ((right - left) >> 1);
//            if (nums[mid] < target) left = mid + 1;
//            else right = mid;
//        }
//
//        if (right == n - 1) return nums[right] < target ? n : right;
//
//        return right;
//    }
//};

//x 的平方根（easy）
//class Solution {
//public:
//    int mySqrt(int x) {
//        if (x < 1) return 0;
//        long long left = 0, right = x;
//        while (left < right)
//        {
//            long long mid = left + ((right - left + 1) >> 1);
//            if (mid * mid <= x) left = mid;
//            else right = mid - 1;
//        }
//
//        return left;
//    }
//};
//
//int main()
//{
//
//    Solution().mySqrt(4);
//    return 0;
//}
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
//二分查找（easy）
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