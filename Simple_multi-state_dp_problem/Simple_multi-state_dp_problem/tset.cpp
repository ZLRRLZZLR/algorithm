

//打家劫舍II （medium）
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//
//        int n = nums.size();
//
//        return max(nums[0] + robel(nums, 2, n - 2), robel(nums, 1, n - 1));
//    }
//    int robel(vector<int>& nums, int left, int right)
//    {
//        if (left > right) return 0;
//        int n = nums.size();
//        vector<int> f(n);
//        auto g = f;
//
//        f[left] = nums[left];
//
//        for (int i = left + 1; i <= right; i++)
//        {
//            f[i] = g[i - 1] + nums[i];
//            g[i] = max(f[i - 1], g[i - 1]);
//        }
//
//        return max(f[right], g[right]);
//    }
//};

//按摩师（easy）
//class Solution {
//public:
//    int massage(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 0)
//            return 0;
//        vector<int> f(n);
//        auto g = f;
//
//        f[0] = nums[0];
//        g[0] = 0;
//
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = g[i - 1] + nums[i];
//            g[i] = max(f[i - 1], g[i - 1]);
//        }
//
//        return max(f[n - 1], g[n - 1]);
//    }
//};