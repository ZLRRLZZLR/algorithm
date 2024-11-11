

//1. “∆∂Ø¡„£®easy£©
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int dest = -1;
//        int cur = 0;
//        for (; cur < nums.size();)
//        {
//            if (nums[cur] != 0)
//            {
//                swap(nums[dest + 1], nums[cur++]);
//                dest++;
//            }
//            else
//            {
//                cur++;
//            }
//        }
//    }
//};