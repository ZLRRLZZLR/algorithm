
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
//        int ret = 0;
//        while (n) {
//            ret++;
//            n = n & (n - 1);
//        }
//        return ret;
//    }
//};