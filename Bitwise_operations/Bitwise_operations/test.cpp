#include<iostream>
#include<math.h>
using namespace std;

//汉明距离
//class Solution {
//public:
//    int hammingDistance(int x, int y) {
//        int n = x ^ y, count = 0;
//        while (n) {
//            n = n & (n - 1);
//            count++;
//        }
//        return count;
//    }
//};
//class Solution {
//public:
//    int hammingDistance(int x, int y) {
//        int ret = 0;
//        int count1 = 0, count2 = 0;
//        while (x) {
//            count1++;
//            x = x & (x - 1);
//        }
//        while (y) {
//            count2++;
//            y = y & (y - 1);
//        }
//        return abs(abs(count2 - count1));
//    }
//};
//
//int main() {
//    Solution().hammingDistance(1,4);
//    return 0;
//}
//比特位计数
//class Solution {
//public:
//    vector<int> countBits(int n) {
//        vector<int> ret(n + 1);
//        for (int i = 0; i <= n; i++) {
//            int count = 0, tmp = i;
//            while (tmp) {
//                count++;
//                tmp = tmp & (tmp - 1);
//            }
//            ret[i] = count;
//        }
//
//        return ret;
//    }
//};
//位1的个数
//class Solution {
//public:
//    int hammingWeight(int n) {
        //int ret = 0;
        //while (n) {
        //    ret++;
        //    n = n & (n - 1);
        //}
        //return ret;
//    }
//};