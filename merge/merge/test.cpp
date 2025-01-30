#include<iostream>
#include<vector>

using namespace std;


//计算右侧小于当前元素的个数（hard）
//class Solution {
//    vector<int> tmp1;
//    vector<int> tmp2;
//    vector<int> counts;
//public:
//    vector<int> countSmaller(vector<int>& nums) {
//        tmp1.resize(nums.size());
//        tmp2.resize(nums.size());
//        counts.resize(nums.size());
//        vector<int> index(nums.size());
//        for (int i = 0; i < nums.size(); i++) {
//            index[i] = i;
//        }
//        mergeSort(nums, index, 0, nums.size() - 1);
//        return counts;
//    }
//    void mergeSort(vector<int>& nums, vector<int>& index, int left, int right)
//    {
//        if (left >= right) return;
//        // 1. 选择中间点划分区间
//        int mid = (left + right) >> 1;
//        // [left, mid] [mid + 1, right]
//        // 2. 把左右区间排序
//        mergeSort(nums, index, left, mid);
//        mergeSort(nums, index, mid + 1, right);
//        // 3. 合并两个有序数组
//        int cur1 = left, cur2 = mid + 1, i = 0;
//        while (cur1 <= mid && cur2 <= right) {
//            if (nums[cur1] > nums[cur2])
//                counts[index[cur1]] += right - cur2 + 1;
//
//            if (nums[cur1] > nums[cur2]) {
//                tmp1[i] = nums[cur1];
//                tmp2[i++] = index[cur1++];
//            }
//            else {
//                tmp1[i] = nums[cur2];
//                tmp2[i++] = index[cur2++];
//            }
//        }
//        // 处理没有遍历完的数组
//        while (cur1 <= mid) {
//            tmp1[i] = nums[cur1];
//            tmp2[i++] = index[cur1++];
//        }
//        while (cur2 <= right) {
//            tmp1[i] = nums[cur2];
//            tmp2[i++] = index[cur2++];
//        }
//        // 4. 还原
//        for (int i = left; i <= right; i++) {
//            nums[i] = tmp1[i - left];
//            index[i] = tmp2[i - left];
//        }
//
//    }
//};
//
//
//int main() {
//
//	vector<int> v = { 5,2,6,1 };
//	Solution().countSmaller(v);
//	return 0;
//}

//数组中的逆序对（hard）
//class Solution {
//	vector<int> tmp;
//	int ret = 0;
//public:
//	int reversePairs(vector<int>& record) {
//		tmp.resize(record.size());
//		mergeSort(record, 0, record.size() - 1);
//		return ret;
//	}
//	void mergeSort(vector<int>& nums, int left, int right)
//	{
//		if (left >= right) return;
//		// 1. 选择中间点划分区间
//		int mid = (left + right) >> 1;
//		// [left, mid] [mid + 1, right]
//		// 2. 把左右区间排序
//		mergeSort(nums, left, mid);
//		mergeSort(nums, mid + 1, right);
//
//		// 3. 合并两个有序数组
//		int cur1 = left, cur2 = mid + 1, i = 0;
//		while (cur1 <= mid && cur2 <= right) {
//			if (nums[cur1] > nums[cur2]) {
//				ret += right - cur2 + 1;
//			}
//			tmp[i++] = nums[cur1] > nums[cur2] ? nums[cur1++] : nums[cur2++];
//		}
//		// 处理没有遍历完的数组
//		while (cur1 <= mid) tmp[i++] = nums[cur1++];
//		while (cur2 <= right) tmp[i++] = nums[cur2++];
//		// 4. 还原
//		for (int i = left; i <= right; i++)
//			nums[i] = tmp[i - left];
//
//	}
//};
//
//
//int main() {
//
//	vector<int> v = { 2,4,3,5,1 };
//	Solution().reversePairs(v);
//	return 0;
//}


//class Solution
//{
//	vector<int> tmp;
//public:
//	vector<int> sortArray(vector<int>& nums)
//	{
//		tmp.resize(nums.size());
//		mergeSort(nums, 0, nums.size() - 1);
//		return nums;
//	}
//	void mergeSort(vector<int>& nums, int left, int right)
//	{
//		if (left >= right) return;
//		// 1. 选择中间点划分区间
//		int mid = (left + right) >> 1;
//		// [left, mid] [mid + 1, right]
//		// 2. 把左右区间排序
//		mergeSort(nums, left, mid);
//		mergeSort(nums, mid + 1, right);
//		// 3. 合并两个有序数组
//		int cur1 = left, cur2 = mid + 1, i = 0;
//		while (cur1 <= mid && cur2 <= right)
//			tmp[i++] = nums[cur1] <= nums[cur2] ? nums[cur1++] :
//			nums[cur2++];
//		// 处理没有遍历完的数组
//		while (cur1 <= mid) tmp[i++] = nums[cur1++];
//		while (cur2 <= right) tmp[i++] = nums[cur2++];
//		// 4. 还原
//		for (int i = left; i <= right; i++)
//			nums[i] = tmp[i - left];
//	}
//};