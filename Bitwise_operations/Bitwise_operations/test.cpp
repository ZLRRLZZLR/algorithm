#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


//只出现一次的数字 II（medium）
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (int i = 0; i < 32; i++) {
//            int sum = 0;
//            for (auto j : nums) {//计算每一位比特位的和
//                if ((j >> i) & 1 == 1)
//                    sum++;
//            }
//            if (sum % 3 == 1) ret |= (1 << i);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (int i = 0; i < 32; i++) {
//            int sum = 0;
//            for (auto j : nums) {//计算每一位比特位的和
//                if ((j >> i) & 1 == 1)
//                    sum++;
//            }
//            if (sum % 3 == 1) ret |= (1 << i);
//        }
//        return ret;
//    }
//};
//两整数之和（medium）
//class Solution {
//public:
//    int getSum(int a, int b) {
//        while (b) {
//            int tmp = a;
//            a = a ^ b;//无进位相加
//            b = (tmp & b) << 1;//找到进位
//        }
//        return a;
//    }
//};
//丢失的数字（easy）
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int ret = 0;
//        for (int i = 0; i <= nums.size(); i++) ret ^= i;
//        for (auto i : nums) ret ^= i;
//        return ret;
//    }
//};
// class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int n = nums.size();
//        int ret = n * (n + 1) / 2;
//        for (auto i : nums) ret -= i;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int hash[10004] = {0};
//        for (int i = 0; i <= nums.size(); i++) hash[i]++;
//        for (auto i : nums) hash[i]--;
//        for (int i = 0; i <= nums.size(); i++) if (hash[i] == 1) return i;
//        return -1;
//    }
//};
//
//int main() {
//    vector<int> dp = { 0,1,3 };
//    Solution().missingNumber(dp);
//    return 0;
//}
//判断字符是否唯一（easy）
//class Solution {
//public:
//    bool isUnique(string astr) {
//        if (astr.size() > 26) return false;//鸽巢原理优化
//        int flag = 0;
//        for (auto i : astr) {
//            if (((flag >> (i - 'a')) & 1) == 0) {//判断字符出现次数
//                flag |= (1 << (i - 'a'));//记录字符出现
//            }
//            else {
//                return false;
//            }
//        }
//        return true;
//    }
//};
//只出现一次的数III
//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums) {
//        unsigned tmp = 0;
//        for (auto i : nums) tmp ^= i;
//
//        int a = 0, b = 0;
//        int lowbit = tmp & (-tmp);
//        for (auto i : nums) {
//            if ((i & lowbit) == lowbit)
//                a ^= i;
//            else b ^= i;
//        }
//        return vector<int>{a, b};
//    }
//};
//只出现一次的数
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (auto i : nums) ret ^= i;
//        return ret;
//    }
//};
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