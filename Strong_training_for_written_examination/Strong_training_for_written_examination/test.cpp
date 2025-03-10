#include <cmath>
#include<iostream>
#include<stdio.h>

using namespace std;


//两个数的交集
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param nums1 int整型vector
//     * @param nums2 int整型vector
//     * @return int整型vector
//     */
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        bool hash[1002] = { false };
//        vector<int> ret;
//        for (auto i : nums1) hash[i] = true;
//
//        for (auto i : nums2)
//            if (hash[i]) {
//                hash[i] = false;
//                ret.emplace_back(i);
//            }
//
//        return ret;
//    }
//};
// 数字统计
//int main() {
//    int ret = 0;
//    int left = 0, right = 0;
//    scanf("%d%d", &left, &right);
//    for (int i = left; i <= right; i++) {
//        int tmp = i;
//        while (tmp) {
//            if ((tmp % 10) == 2) ret++;
//            tmp /= 10;
//        }
//    }
//    printf("%d", ret);
//    return 0;
//}