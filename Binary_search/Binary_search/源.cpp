#include<iostream>
#include<vector>
using namespace std;


//���ֲ��ң�easy��
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